#include "simpleTime.h"

__asm__(
".global _GetTicks\n"
"_GetTicks:\n"
"mov.l syscall_table, r2\n"
"mov.l 1f, r0\n"
"jmp @r2\n"
"nop\n"
"1:\n"
".long 0x03B\n"
"syscall_table:\n"
".long 0x80010070\n"
);

static unsigned int lastrandom=0x12345678;

unsigned int rand() {
	lastrandom = ( 0x41C64E6D * lastrandom ) + 0x3039;
	return (lastrandom >> 16);
}

void srand(int s) {
	lastrandom+=s;
}
