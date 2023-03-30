#include <string.h>
/**
 * _strncpy - copying
 * @dest: recive
 * @src: recive
 * @n: recive
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char q[100];

	strcpy(q, src);
	q[n] = '\0';
	strcpy(dest, q);
	return (dest);
}
