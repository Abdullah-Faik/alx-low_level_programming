#include "main.h"
#include <string.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the integer x
 * @y: the integer power
 *
 * Return: int with the value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}

