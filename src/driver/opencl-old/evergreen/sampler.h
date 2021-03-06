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

#ifndef ARCH_EVERGREEN_EMU_OPENCL_SAMPLER_H
#define ARCH_EVERGREEN_EMU_OPENCL_SAMPLER_H


struct evg_opencl_sampler_t
{
	unsigned int id;
	int ref_count;

	OpenclOldDriver *driver;

	unsigned int normalized_coords;
	unsigned int filter_mode;
	unsigned int addressing_mode;
};

struct evg_opencl_sampler_t *evg_opencl_sampler_create(OpenclOldDriver *driver);
void evg_opencl_sampler_free(struct evg_opencl_sampler_t *sampler);


#endif

