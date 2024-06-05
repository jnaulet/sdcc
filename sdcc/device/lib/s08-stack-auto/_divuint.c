/*-------------------------------------------------------------------------
   _divuint.c - routine for division of 16 bit unsigned long

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
_divuint_dummy (void) __naked
{
#define B 9 /* b: [9-10],s -> PARAM_2 */
#define A 5 /* a:  [5-6],s -> PARAM_1 (from X:A) */
#define Q 3 /* q:  [3-4],s -> quotient */
#define Z 1 /* z:  [1-2],s -> return */

	__asm

	.globl __divuint

__divuint:
	psha
	pshx
	ais #-4
	ldhx #0
	;; q = 0
	sthx (Q + 0),s
	;; z = 0
	sthx (Z + 0),s
	;; n = 16 + 1
	ldx #16 + 1
.loop:
	;; z <<= 1
	asl (Z + 1),s
	rol (Z + 0),s
	;; compare q with PARAM_2
	lda (Q + 1),s
	sub (B + 1),s
	lda (Q + 0),s
	sbc (B + 0),s
	bcs .next
	;; if q >= PARAM_2, q -= PARAM_2
	lda (Q + 1),s
	sub (B + 1),s
	sta (Q + 1),s
	lda (Q + 0),s
	sbc (B + 0),s
	sta (Q + 0),s
	inc (Z + 1),s ; z |= 1
.next:
	;; q:PARAM_1 <<= 1
	;; lsl PARAM_1 with carry
	asl (A + 1),s
	rol (A + 0),s
	;; rol q
	rol (Q + 1),s
	rol (Q + 0),s
	;; while n != 0
	dbnzx .loop
	;; return z
	pulx
	pula
	;; redeem stack
	ais #4
	rts

	__endasm;
}
