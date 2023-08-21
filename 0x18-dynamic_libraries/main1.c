#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src && n--)
		*dest++ = *src++;
	while (n--)
		*dest++ = '\0';
	return (temp);
}
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference of the ASCII values of the first non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
		*s++ = b;
	return (temp);
}
