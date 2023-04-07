#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of bytes to search for
 *
 * Return: pointer to the first matching byte in s or NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_accept;

	while (*s != '\0')
	{
		p_accept = accept;
		while (*p_accept != '\0')
		{
			if (*s == *p_accept)
				return (s);
			p_accept++;
		}
		s++;
	}
	return (NULL);
}
