#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int k = 512 << 15;
	int f = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	while (k > 0)
	{
		if (n >= k)
		{
			f = 1;
			printf("1");
			_putchar('1');
			n -= k;
		}
		else
		{
			if (f == 1)
				printf("0");
			_putchar('0');
		}
		k = k >> 1;
	}
}
