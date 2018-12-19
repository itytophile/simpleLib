#ifndef _SIMPLEDRAW_H
#define _SIMPLEDRAW_H

#define MAX_X 127
#define MAX_Y 63

#define line(A, B, C, D) Bdisp_DrawLineVRAM(A, B, C, D)
#define pixel(A, B, C) Bdisp_SetPoint_VRAM(A, B, C) //C = 1 : black, C = 0 : white
#define clearVRAM() Bdisp_AllClr_VRAM()
#define clearDisplay() Bdisp_AllClr_DD()
#define clear() Bdisp_AllClr_DDVRAM()
#define display() Bdisp_PutDisp_DD()

void printForma(int x, int y, char *s);
void rect(int x1, int y1, int x2, int y2);

#endif
