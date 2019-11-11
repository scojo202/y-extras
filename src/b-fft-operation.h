/*
 * y-fft-operation.h :
 *
 * Copyright (C) 2017 Scott O. Johnson (scojo202@gmail.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301
 * USA
 */

#pragma once

#include <data/b-data-class.h>
#include <b-operation.h>

G_BEGIN_DECLS

G_DECLARE_FINAL_TYPE(BFFTOperation,b_fft_operation,B,FFT_OPERATION,BOperation)

#define B_TYPE_FFT_OPERATION  (b_fft_operation_get_type ())

enum {
	FFT_MAG = 0,
	FFT_PHASE
};

BOperation *b_fft_operation_new (int type);

G_END_DECLS
