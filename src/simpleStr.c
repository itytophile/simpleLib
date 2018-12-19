#include "simpleStr.h"

char *strcpy(char *dest, const char *src) {
	char *s = dest;
	while((*s = *src)) s++, src++;
	return dest;
}

char *strncpy(char *dest, const char *src, int n) {
	int i = 0;
	if(n <= 0) return dest;
	do dest[i] = src[i];
	while(src[i++] && i < n);
	return dest;
}

int strlen(char *str) {
	int i = 0;
	while(str[i]) i++;
	return i;
}

int strcmp(char *s1, char *s2) {
	while(*s1 == *s2 && *s1) s1++, s2++;
	return *s1 - *s2;
}

int strncmp(char *s1, char *s2, int n) {
	int i = 0;
	if(n <= 0) return 0;
	while(s1[i] == s2[i] && s1[i] && i < n-1) ++i;
	return s1[i] - s2[i];
}
