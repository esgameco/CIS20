#include "convert.h"
#include "arrMan.h"

int main()
{
	// Question 1
	unsigned char input[] = { 1, 0, 0, 1, 0, 1, 0, 0 };

	unsigned char* decimal = binToX(input, 8, 8);
	unsigned char* octal = binToX(input, 8, 3);
	unsigned char* hex = binToX(input, 8, 4);
	unsigned char* decimalBin = xToBin(decimal, 8, 8);
	unsigned char* octalBin = xToBin(octal, 8, 3);
	unsigned char* hexBin = xToBin(hex, 8, 4);

	printBytes("decimal\0", decimal, 1);
	printBytes("octal\0", octal, 3);
	printBytes("hex\0", hex, 2);

	printBytes("decimal bits\0", decimalBin, 8);
	printBytes("octal bits\0", octalBin, 8);
	printBytes("hex bits\0", hexBin, 8);

	// Question 2
	int arr[] = { 1, 4, 6, 5, 2, 7, 10 };

	int index = search(arr, 7, 6);
	int* reversed = reverse(arr, 7);
	int* oddFirsted = oddFirst(arr, 7);

	free(decimal);
	free(octal);
	free(hex);
}