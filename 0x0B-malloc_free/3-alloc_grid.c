#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2 dimensional array
 */

int **alloc_grid(int width, int height)
{

	int *arr, i;

	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (width * height); i++)
		arr[i] = 0;

	return (arr);
}
