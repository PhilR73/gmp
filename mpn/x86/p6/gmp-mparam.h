/* Intel P6 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2003 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */


#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4


/* NOTE: In a fat binary build SQR_KARATSUBA_THRESHOLD here cannot be
   smaller than the value in mpn/x86/p6/mmx/gmp-mparam.h.  The former is
   used as a hard limit in mpn/x86/p6/sqr_basecase.asm, and that file will
   be run by the p6/mmx cpus (pentium2, pentium3).  */


/* 200MHz Pentium Pro */

/* Generated by tuneup.c, 2003-02-12, gcc 2.95 */

#define MUL_KARATSUBA_THRESHOLD          23
#define MUL_TOOM3_THRESHOLD             140

#define SQR_BASECASE_THRESHOLD            0  /* always */
#define SQR_KARATSUBA_THRESHOLD          52
#define SQR_TOOM3_THRESHOLD             189

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                116
#define POWM_THRESHOLD                  131

#define GCD_ACCEL_THRESHOLD               3
#define GCDEXT_THRESHOLD                 33
#define JACOBI_BASE_METHOD                1

#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1  /* native */
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             18
#define GET_STR_PRECOMPUTE_THRESHOLD     23
#define SET_STR_THRESHOLD              6093

#define MUL_FFT_TABLE  { 464, 928, 1920, 3584, 10240, 40960, 0 }
#define MUL_FFT_MODF_THRESHOLD          360
#define MUL_FFT_THRESHOLD              2816

#define SQR_FFT_TABLE  { 528, 1184, 1920, 4608, 14336, 40960, 0 }
#define SQR_FFT_MODF_THRESHOLD          440
#define SQR_FFT_THRESHOLD              2816
