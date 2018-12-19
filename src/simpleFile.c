#include <fxlib.h>
#include "simpleFile.h"
#include "simpleStr.h"

void strToPath(char *str, FONTCHARACTER *fc, char *p) {
	while(*p) *fc++ = *p++;
	while((*fc = *str)) fc++, str++;
}
