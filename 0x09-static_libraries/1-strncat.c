#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strncat - contatination
 * @dest: recive
 * @src: recive
 * @n: recive
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char q[100];

	strcpy(q, src);
	q[n] = '\0';
	strcat(dest, q);
	return (dest);
}
