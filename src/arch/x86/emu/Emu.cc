/*
 *  Multi2Sim
 *  Copyright (C) 2012  Rafael Ubal (ubal@ece.neu.edu)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <arch/x86/asm/Asm.h>

#include "Context.h"
#include "Emu.h"


namespace x86
{

//
// Class 'EmuConfig'
//

EmuConfig::EmuConfig()
{
	// Initialize
	sim_kind = comm::ArchSimFunctional;
}

void EmuConfig::Register(misc::CommandLine &command_line)
{
	// Option --x86-debug-call <file>
	command_line.RegisterString("--x86-debug-call <file>", call_debug_file,
			"Dump debug information about function calls and "
			"returns. The control flow of an x86 program can be "
			"observed leveraging ELF symbols present in the program "
			"binary.");
	
	// Option --x86-debug-ctx <file>
	command_line.RegisterString("--x86-debug-ctx <file>", context_debug_file,
			"Dump debug information related with context creation, "
			"destruction, allocation, or state change.");

	// Option --x86-debug-cuda <file>
	command_line.RegisterString("--x86-debug-cuda <file>", cuda_debug_file,
			"Debug information for the CUDA driver.");

	// Option --x86-debug-glut <file>
	command_line.RegisterString("--x86-debug-glut <file>", glut_debug_file,
			"Debug information for the GLUT library, used by "
			"OpenGL programs.");

	// Option --x86-debug-isa <file>
	command_line.RegisterString("--x86-debug-isa <file>", isa_debug_file,
			"Debug information for dynamic execution of x86 "
			"instructions. Updates on the processor state can be "
			"analyzed using this information.");

	// Option --x86-debug-loader <file>
	command_line.RegisterString("--x86-debug-loader <file>", loader_debug_file,
			"Dump debug information extending the analysis of the "
			"ELF program binary. This information shows which ELF "
			"sections and symbols are loaded to the initial program "
			"memory image.");

	// Option --x86-debug-opencl <file>
	command_line.RegisterString("--x86-debug-opencl <file>", opencl_debug_file,
			"Debug information for the OpenCL driver.");
	
	// Option --x86-debug-opengl <file>
	command_line.RegisterString("--x86-debug-opengl <file>", opencl_debug_file,
			"Debug information for the OpenGL graphics driver.");
	
	// Option --x86-debug-syscall <file>
	command_line.RegisterString("--x86-debug-syscall <file>", syscall_debug_file,
			"Debug information for system calls performed by an x86 "
			"program, including system call code, aguments, and "
			"return value.");
		
	// Option --x86-max-inst <number>
	command_line.RegisterInt64("--x86-max-inst <number>", max_instructions,
			"Maximum number of x86 instructions. On x86 functional "
			"simulation, this limit is given in number of emulated "
			"instructions. On x86 detailed simulation, it is given as "
			"the number of committed (non-speculative) instructions. "
			"Use 0 (default) for unlimited.");

	// Option --x86-sim <kind>
	command_line.RegisterEnum("--x86-sim {functional|detailed}", (int &) sim_kind,
			comm::arch_sim_kind_map,
			"Level of accuracy of x86 simulation. The default value "
			"is functional simulation.");
}


void EmuConfig::Process()
{
	// Debuggers
	Emu::call_debug.setPath(call_debug_file);
	Emu::context_debug.setPath(context_debug_file);
	Emu::cuda_debug.setPath(cuda_debug_file);
	Emu::glut_debug.setPath(glut_debug_file);
	Emu::isa_debug.setPath(isa_debug_file);
	Emu::loader_debug.setPath(loader_debug_file);
	Emu::opencl_debug.setPath(opencl_debug_file);
	Emu::opengl_debug.setPath(opengl_debug_file);
	Emu::syscall_debug.setPath(syscall_debug_file);
}



//
// Class 'Emu'
//

// Emulator singleton
std::unique_ptr<Emu> Emu::instance;

// Debuggers
misc::Debug Emu::call_debug;
misc::Debug Emu::context_debug;
misc::Debug Emu::cuda_debug;
misc::Debug Emu::glut_debug;
misc::Debug Emu::isa_debug;
misc::Debug Emu::loader_debug;
misc::Debug Emu::opencl_debug;
misc::Debug Emu::opengl_debug;
misc::Debug Emu::syscall_debug;

// Configuration
EmuConfig Emu::config;


Emu::Emu() : comm::Emu("x86")
{
	// Initialize
	pid = 100;
}

void Emu::AddContextToList(ContextListType type, Context *context)
{
	// Nothing if already present
	if (context->context_list_present[type])
		return;

	// Add context
	context->context_list_present[type] = true;
	context_list[type].push_back(context);
	auto iter = context_list[type].end();
	context->context_list_iter[type] = --iter;
}

	
void Emu::RemoveContextFromList(ContextListType type, Context *context)
{
	// Nothing if not present
	if (!context->context_list_present[type])
		return;

	// Remove context
	context->context_list_present[type] = false;
	auto iter = context->context_list_iter[type];
	context_list[type].erase(iter);
}
	

void Emu::UpdateContextInList(ContextListType type, Context *context,
			int present)
{
	if (present && !context->context_list_present[type])
		AddContextToList(type, context);
	else if (!present && context->context_list_present[type])
		RemoveContextFromList(type, context);
}


Emu *Emu::getInstance()
{
	// Instance already exists
	if (instance.get())
		return instance.get();

	// Create instance
	instance.reset(new Emu());
	return instance.get();
}


Context *Emu::newContext(const std::vector<std::string> &args,
			const std::vector<std::string> &env,
			const std::string &cwd,
			const std::string &stdin_file_name,
			const std::string &stdout_file_name)
{
	// Create context and add to context list
	Context *context = new Context();
	contexts.emplace_back(context);

	// Save position in context list
	auto iter = contexts.end();
	context->contexts_iter = --iter;

	// Load program
	context->loadProgram(args, env, cwd, stdin_file_name,
			stdout_file_name);

	// Return
	return context;
}


void Emu::freeContext(Context *context)
{
	// Remove context from all context lists
	for (int i = 0; i < ContextListCount; i++)
		RemoveContextFromList((ContextListType) i, context);
	
	// Remove from main context list. This will invoke the context
	// destructor and free it.
	contexts.erase(context->contexts_iter);
}


void Emu::ProcessEvents()
{
}


bool Emu::Run()
{
	// Stop if there is no more contexts
	if (!contexts.size())
		return false;

	// Stop if maximum number of CPU instructions exceeded
	if (config.getMaxInstructions() && instructions >=
			config.getMaxInstructions())
		esim->Finish(esim::ESimFinishX86MaxInst);

	// Stop if any previous reason met
	if (esim->hasFinished())
		return true;

	// Run an instruction from every running context. During execution, a
	// context can remove itself from the running list, so we need to save
	// the iterator to the next element before executing.
	auto end = context_list[ContextListRunning].end();
	for (auto it = context_list[ContextListRunning].begin(); it != end; )
	{
		// Save position of next context
		auto next = it;
		++next;

		// Run one iteration
		Context *context = *it;
		context->Execute();

		// Move to saved next context
		it = next;
	}

	// Free finished contexts
	while (context_list[ContextListFinished].size())
		freeContext(context_list[ContextListFinished].front());

	// Process list of suspended contexts
	ProcessEvents();

	// Still running
	return true;
}

} // namespace x86

