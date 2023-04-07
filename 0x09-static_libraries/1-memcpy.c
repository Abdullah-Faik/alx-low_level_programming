#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *src_1 = src, *dest_1 = dest;

	for (i = 0; i < n; i++)
	{
		*(dest_1 + i) = *(src_1 + i);
	}

	return (dest);
}
