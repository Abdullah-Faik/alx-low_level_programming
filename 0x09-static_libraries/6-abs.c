#include <stdio.h>
#include "main.h"
/**
 * _abs - checks if a character is lowercase
 * @n: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
