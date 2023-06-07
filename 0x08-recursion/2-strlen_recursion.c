#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - calculate the length of a string
 * @s: the string
 *
 * Return: the number of letters in a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

