#ifndef _SIMPLEDRAW_H
#define _SIMPLEDRAW_H

#define MAX_X 127
#define MAX_Y 63

#define line(A, B, C, D) Bdisp_DrawLineVRAM(A, B, C, D)
#define clearVRAM() Bdisp_AllClr_VRAM()
#define clearDisplay() Bdisp_AllClr_DD()
#define clear() Bdisp_AllClr_DDVRAM()
#define display() Bdisp_PutDisp_DD()

void printForma(int x, int y, char *s);
void rect(int x1, int y1, int x2, int y2);
void circle(int xc, int yc, int r);
void pixel(int x, int y, unsigned short color);

#endif
