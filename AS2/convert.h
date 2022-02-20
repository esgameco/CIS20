#ifndef CONVERT
#define CONVERT

#include <stdio.h>
#include <stdlib.h>

unsigned char* binToX(unsigned char*, int, int);
unsigned char* xToBin(unsigned char*, int, int);
void printBytes(char*, unsigned char*, int);
void printInts(char*, int*, int);

#endif