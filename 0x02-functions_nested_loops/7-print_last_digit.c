#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - checks if a character is lowercase
 * @n: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int print_last_digit(int n)
{
	_putchar(abs(n % 10) + '0');
	return (abs(n % 10));
}
