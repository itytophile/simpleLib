#include <fxlib.h>
#include "simpleDraw.h"

__asm__(
".global _pixel\n"
"_pixel:\n"
"mov.l syscall_table, r2\n"
"mov.l 1f, r0\n"
"jmp @r2\n"
"nop\n"
"1:\n"
".long 0x0146\n"
"syscall_table:\n"
".long 0x80010070\n"
);

void printForma(int x, int y, char *s) {
	int i = 0;
	while(s[i] != '\n' && s[i]) ++i;
	if(s[i]) {
		s[i] = 0;
		PrintMini(x, y, s, 0);
		printForma(x, y+7, s+i+1);
	} else PrintMini(x, y, s, 0);
}

void rect(int x1, int y1, int x2, int y2) {
	line(x1, y1, x2, y1);
	line(x1, y1, x1, y2);
	line(x2, y2, x2, y1);
	line(x2, y2, x1, y2);
}

void circle(int xc, int yc, int r) { //Eric Andres
	int x = 0, y = r, d = r-1;
	while(y >= x) {
		pixel(xc+x, yc+y, 1);
		pixel(xc+y, yc+x, 1);
		pixel(xc-x, yc+y, 1);
		pixel(xc-y, yc+x, 1);
		pixel(xc+x, yc-y, 1);
		pixel(xc+y, yc-x, 1);
		pixel(xc-x, yc-y, 1);
		pixel(xc-y, yc-x, 1);
		if(d >= 2*x) d -= 2*(x++)+1;
		else if(d < 2*(r-y)) d += 2*(y--) - 1;
		else d += 2*((y--)-(x++)-1);
	}
}
