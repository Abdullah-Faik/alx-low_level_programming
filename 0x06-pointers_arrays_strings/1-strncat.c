#include <string.h>
/**
 * _strncat - contatination
 * @dest: recive
 * @src: recive
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{       src[n] = '\0';
	strcat(dest, src);
	return (dest);
}
