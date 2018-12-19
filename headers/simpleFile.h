#ifndef _SIMPLEFILE_H
#define _SIMPLEFILE_H

#define STORAGE "\\\\fls0\\"
#define SDCARD "\\\\crd0\\"

#define bfopen(A, B) Bfile_OpenFile(A, B) //returns int file ID ; A: char* filename, B: int mode ; _OPENMODE_READ, _OPENMODE_READ_SHARE, _OPENMODE_WRITE, _OPENMODE_READWRITE, _OPENMODE_READWRITE_SHARE
#define bfread(A, B, C, D) Bfile_ReadFile(A, B, C, D) //returns int < 0 if the function fails ; A: int file ID, B: void* pointer to buffer that reads data, C: int number of bytes to read, D: int specifies the position to read ; D = -1 : current position, D > 0 : the position will be D
#define bfwrite(A, B, C) Bfile_WriteFile(A, B, C)  //returns int < 0 if the function fails ; A: int file ID, B: void*  pointer to buffer that writes data, C: int number of bytes to write
#define bfseek(A, B) Bfile_SeekFile(A, B) //return int < 0 if the function fails ; A: int file ID, B: int position
#define bfclose(A) Bfile_CloseFile(A)
#define bfsize(A) Bfile_GetFileSize(A)
#define bfcreate(A, B) Bfile_CreateFile(A, B)
#define bfmkdir(A) Bfile_CreateDirectory(A)
#define bfrm(A) Bfile_DeleteFile(A)

void strToPath(char *str, FONTCHARACTER *fc, char *prefix);

#endif
