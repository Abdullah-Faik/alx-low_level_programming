#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * wildcmp - returns the value of x raised to the power of y.
 * @s1: the CHAR s1
 * @s2: the CHAR s2
 *
 * Return: int with the value of x to the power of y
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}
