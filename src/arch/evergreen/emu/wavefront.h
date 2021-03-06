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

#ifndef ARCH_EVERGREEN_EMU_WAVEFRONT_H
#define ARCH_EVERGREEN_EMU_WAVEFRONT_H

#include <arch/evergreen/asm/alu-group.h>
#include <arch/evergreen/asm/asm.h>



/*
 * Class 'EvgWavefront'
 */

#define EVG_WAVEFRONT_STACK_SIZE  32

CLASS_BEGIN(EvgWavefront, Object)

	/* ID */
	char *name;
	int id;
	int id_in_work_group;

	/* IDs of work-items it contains */
	int work_item_id_first;
	int work_item_id_last;
	int work_item_count;

	/* NDRange and Work-group it belongs to */
	EvgNDRange *ndrange;
	EvgWorkGroup *work_group;

	/* Pointer to work_items */
	EvgWorkItem **work_items;  /* Pointer to first work-items in 'kernel->work_items' */

	/* Current clause kind and instruction pointers */
	EvgInstClause clause_kind;

	/* Current instructions */
	EvgInst *cf_inst;
	EvgALUGroup *alu_group;
	EvgInst *tex_inst;

	/* Starting/current CF buffer */
	void *cf_buf_start;
	void *cf_buf;

	/* Secondary clause boundaries and current position */
	void *clause_buf;
	void *clause_buf_start;
	void *clause_buf_end;

	/* Active mask stack */
	struct bit_map_t *active_stack;  /* EVG_MAX_STACK_SIZE * work_item_count elements */
	int stack_top;

	/* Predicate mask */
	struct bit_map_t *pred;  /* work_item_count elements */

	/* Loop counters */
	/* FIXME: Include this as part of the stack to handle nested loops */
	int loop_depth;
	int loop_max_trip_count;
	int loop_trip_count;
	int loop_start;
	int loop_step;
	int loop_index;

	/* Flags updated during instruction execution */
	unsigned int global_mem_read : 1;
	unsigned int global_mem_write : 1;
	unsigned int local_mem_read : 1;
	unsigned int local_mem_write : 1;
	unsigned int pred_mask_update : 1;
	unsigned int push_before_done : 1;  /* Indicates whether the stack has been pushed after PRED_SET* instr. */
	unsigned int active_mask_update : 1;
	int active_mask_push;  /* Number of entries the stack was pushed */
	int active_mask_pop;  /* Number of entries the stack was popped */

	/* Linked lists */
	EvgWavefront *running_list_next;
	EvgWavefront *running_list_prev;
	EvgWavefront *barrier_list_next;
	EvgWavefront *barrier_list_prev;
	EvgWavefront *finished_list_next;
	EvgWavefront *finished_list_prev;

	/* Fields introduced for architectural simulation */
	int id_in_compute_unit;
	int alu_engine_in_flight;  /* Number of in-flight uops in ALU engine */
	long long sched_when;  /* GPU cycle when wavefront was last scheduled */


	/* Periodic report - used by architectural simulation */

	FILE *periodic_report_file;  /* File where report is dumped */
	long long periodic_report_vliw_bundle_count;  /* Number of VLIW bundles (or non-ALU instructions) reported */
	long long periodic_report_cycle;  /* Last cycle when periodic report was updated */
	int periodic_report_inst_count;  /* Number of instructions (VLIW slots) in this interval */
	int periodic_report_local_mem_accesses;  /* Number of local memory accesses in this interval */
	int periodic_report_global_mem_writes;  /* Number of Global memory writes in this interval */
	int periodic_report_global_mem_reads;  /* Number of Global memory reads in this interval */


	/* Statistics */

	long long inst_count;  /* Total number of instructions */
	long long global_mem_inst_count;  /* Instructions (CF or TC) accessing global memory */
	long long local_mem_inst_count;  /* Instructions (ALU) accessing local memory */

	long long cf_inst_count;  /* Number of CF inst executed */
	long long cf_inst_global_mem_write_count;  /* Number of instructions writing to global mem (they are CF inst) */

	long long alu_clause_count;  /* Number of ALU clauses started */
	long long alu_group_count;  /* Number of ALU instruction groups (VLIW) */
	long long alu_group_size[5];  /* Distribution of group sizes (alu_group_size[0] is the number of groups with 1 inst) */
	long long alu_inst_count;  /* Number of ALU instructions */
	long long alu_inst_local_mem_count;  /* Instructions accessing local memory (ALU) */

	long long tc_clause_count;
	long long tc_inst_count;
	long long tc_inst_global_mem_read_count;  /* Number of instructions reading from global mem (they are TC inst) */

CLASS_END(EvgWavefront)

#define EVG_FOREACH_WAVEFRONT_IN_NDRANGE(NDRANGE, WAVEFRONT_ID) \
	for ((WAVEFRONT_ID) = (NDRANGE)->wavefront_id_first; \
		(WAVEFRONT_ID) <= (NDRANGE)->wavefront_id_last; \
		(WAVEFRONT_ID)++)

#define EVG_FOREACH_WAVEFRONT_IN_WORK_GROUP(WORK_GROUP, WAVEFRONT_ID) \
	for ((WAVEFRONT_ID) = (WORK_GROUP)->wavefront_id_first; \
		(WAVEFRONT_ID) <= (WORK_GROUP)->wavefront_id_last; \
		(WAVEFRONT_ID)++)


void EvgWavefrontCreate(EvgWavefront *self, EvgWorkGroup *work_group);
void EvgWavefrontDestroy(EvgWavefront *self);

void EvgWavefrontDump(EvgWavefront *wavefront, FILE *f);

void EvgWavefrontSetName(EvgWavefront *wavefront, char *name);

void EvgWavefrontPush(EvgWavefront *wavefront);
void EvgWavefrontPop(EvgWavefront *wavefront, int count);
void EvgWavefrontExecute(EvgWavefront *wavefront);


#endif

