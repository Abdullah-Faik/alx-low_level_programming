#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Calculates the sum of the two diagonals of a square matrix.
* @a: Pointer to the first element of the matrix.
* @size: Size of the matrix.
* Return: void.
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i, j;

	for (i = 0, j = 1; i < size; i++, j++)
	{
		sum1 = sum1 + a[i + i * size];
		sum2 = sum2 + a[(size - 1) * j];
	}
	printf("%d, %d\n", sum1, sum2);
}
