// This file is part of Oaklisp.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// The GNU GPL is available at http://www.gnu.org/licenses/gpl.html
// or from the Free Software Foundation, 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA


/**********************************************************************
 *  Copyright (c) by Barak A. Pearlmutter and Kevin J. Lang, 1987-99. *
 *  Copyright (c) by Alex Stuebinger, 1998-99.                        *
 *  Distributed under the GNU General Public License v2 or later      *
 **********************************************************************/


#ifndef _WEAK_H_INCLUDED
#define _WEAK_H_INCLUDED

#include "data.h"

void init_weakpointer_tables(void);
void rebuild_wp_hashtable(void);
ref_t ref_to_wp(ref_t r);
extern unsigned long post_gc_wp(void);

/* Weak pointer table and weak pointer hashtable */

extern const int wp_table_size, wp_hashtable_size;
extern ref_t *wp_table;
extern int wp_index;

#endif
