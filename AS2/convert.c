#include "convert.h"

//
// Base lookup
// - 3 bits (2^3) = octal
// - 4 bits (2^4) = hexa
// - 8 bits (2^8) = decimal
//

// base 1 -> base X
unsigned char* binToX(unsigned char* input, int inputSize, int baseBits)
{
	unsigned char* output = calloc((inputSize / baseBits) + 1, sizeof(unsigned char));

	for (int i = 0; i < inputSize; i++)
	{
		output[i / baseBits] += input[i] << (i % baseBits);
	}

	return output;
}

// base X -> base 1
unsigned char* xToBin(unsigned char* input, int inputSize, int baseBits)
{
	unsigned char* output = calloc(inputSize * baseBits, sizeof(unsigned char));

	for (int i = 0; i < inputSize; i++)
	{
		for (int j = 0; j < baseBits; j++)
		{
			output[i] = (input[i / baseBits] & (1 << (i % baseBits))) >> (i % baseBits);
		}
	}

	return output;
}

// Prints characters (helper function)
void printBytes(char* descriptor, unsigned char* bytes, int nBytes)
{
	printf("%s - ", descriptor);

	for (int i = nBytes-1; i >= 0; i--)
		printf("%d", bytes[i]);

	printf("\n");
}

// Prints integers (helper function)
void printInts(char* descriptor, int* ints, int nInts)
{
	printf("%s - ", descriptor);

	for (int i = nInts - 1; i >= 0; i--)
		printf("%d", ints[i]);

	printf("\n");
}