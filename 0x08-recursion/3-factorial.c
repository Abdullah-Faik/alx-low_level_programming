#include "main.h"
#include <string.h>

/**
 * factorial - the factorial of a given number
 * @n: the number
 *
 * Return: the factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

