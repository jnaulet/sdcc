/* key.c - a ward to alert us in case obsolete sdcc-specific keywords rise from the dead.
 */

#include <testfwk.h>

int _asm;
int _endasm, at, bit, code, critical, data, far,
eeprom, fixed16x16, flash, idata, interrupt, nonbanked, banked, near,
pdata, reentrant, shadowregs, wparam, sfr, sfr16, sfr32, sbit, sram,
using, _naked, xdata, _overlay;

void testBug(void)
{
}

