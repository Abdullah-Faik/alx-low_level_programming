#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	return (p);
}
