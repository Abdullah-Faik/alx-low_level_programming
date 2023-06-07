#include "main.h"
#include <string.h>

/**
 * square_root_shadow - calculate the square root using guess numbers
 * @num: the given number
 * @min: minimum guess number
 * @max: maximum guess number
 *
 * Return: square root integer
 */

int square_root_shadow(int num, int min, int max)
{
	int long guess;
	int long guess_square;

	if (min > max)
		return (-1);
	guess = (min + max) / 2;
	guess_square = guess * guess;

	if (guess_square == num)
	{
		return (guess);
	}
	else if (guess_square < num)
	{
		return (square_root_shadow(num, min + 1, num));
	}
	else
	{
		return (square_root_shadow(num, min, guess - 1));
	}
}

/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the given number
 *
 * Return: integer of the square root
 */

int _sqrt_recursion(int n)
{
	return (square_root_shadow(n, 1, n));
}

