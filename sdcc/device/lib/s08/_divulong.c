/*-------------------------------------------------------------------------
   _divulong.c - routine for division of 32 bit unsigned long

   Copyright (C) 1999, Jean-Louis Vern <jlvern AT gmail.com>

   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this library; see the file COPYING. If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.

   As a special exception, if you link this library with other files,
   some of which are compiled with SDCC, to produce an executable,
   this library does not by itself cause the resulting executable to
   be covered by the GNU General Public License. This exception does
   not however invalidate any other reasons why the executable file
   might be covered by the GNU General Public License.
-------------------------------------------------------------------------*/
static void
_divulong_dummy (void) __naked
{
#define Q  5 /* q:   [5-8],s -> quotient */
#define Z  1 /* z:   [1-4],s -> return */

	__asm

	.globl __divulong_PARM_2
	.globl __divulong_PARM_1
	.globl __divulong

	.area XSEG
__divulong_PARM_1:
	.ds 4
__divulong_PARM_2:
	.ds 4

	.area CSEG (CODE)

__divulong:
	ais #-8
	ldhx #0
	;; q = 0
	sthx (Q + 2),s
	sthx (Q + 0),s
	;; z = 0
	sthx (Z + 2),s
	sthx (Z + 0),s
	;; n = 32 + 1
	ldx #32 + 1
.loop:
	;; z <<= 1
	asl (Z + 3),s
	rol (Z + 2),s
	rol (Z + 1),s
	rol (Z + 0),s
	;; compare q with PARAM_2
	lda (Q + 3),s
	sub *(__divulong_PARM_2 + 3)
	lda (Q + 2),s
	sbc *(__divulong_PARM_2 + 2)
	lda (Q + 1),s
	sbc *(__divulong_PARM_2 + 1)
	lda (Q + 0),s
	sbc *(__divulong_PARM_2 + 0)
	bcs .next
	;; if q >= PARAM_2, q -= PARAM_2
	lda (Q + 3),s
	sub *(__divulong_PARM_2 + 3)
	sta (Q + 3),s
	lda (Q + 2),s
	sbc *(__divulong_PARM_2 + 2)
	sta (Q + 2),s
	lda (Q + 1),s
	sbc *(__divulong_PARM_2 + 1)
	sta (Q + 1),s
	lda (Q + 0),s
	sbc *(__divulong_PARM_2 + 0)
	sta (Q + 0),s
	inc (Z + 3),s ; z |= 1
.next:
	;; q:PARAM_1 <<= 1
	;; lsl PARAM_1 with carry
	asl *(__divulong_PARM_1 + 3)
	rol *(__divulong_PARM_1 + 2)
	rol *(__divulong_PARM_1 + 1)
	rol *(__divulong_PARM_1 + 0)
	;; rol q
	rol (Q + 3),s
	rol (Q + 2),s
	rol (Q + 1),s
	rol (Q + 0),s
	;; while n != 0
	dbnzx .loop
	;; return z
	pula
	sta *___SDCC_hc08_ret2
	pula
	sta *___SDCC_hc08_ret3
	pulx
	pula
	;; redeem stack
	ais #4
	rts

	__endasm;
}
