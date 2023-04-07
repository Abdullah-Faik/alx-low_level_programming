#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copying
 * @dest: recive
 * @src: recive
 * @n: recive
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
