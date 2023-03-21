#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * print_last_digit - checks if a character is lowercase
 * @n: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_last_digit(int n)
{
	return (abs(n % 10));
}
