#include "arrMan.h"

int search(int arr[], int n, int val)
{
	for (int i = 0; i < n; i++)
		if (*(arr + (sizeof(int) * i)) == val)
			return i;
	return -1;
}

int* reverse(int arr[], int n)
{
	int* output = calloc(n, sizeof(int));

	for (int i = 0; i < n; i++)
		*(output + sizeof(int) * i) = *(arr + sizeof(int) * (n-i-1));

	return output;
}

int* oddFirst(int arr[], int n)
{
	int* output = calloc(n, sizeof(int));

	for (int i = 0; i < n; i++)
		*(output + sizeof(int) * i) = *(arr + sizeof(int) * (n - i - 1));

	return output;
}