#include "main.h"
/**
 * print_times_table - print table
 * @n: recive numbers
*/
void print_times_table(int n)
{
	int k;
	int i = 1;
	int j = 1;

	if (n < 15 && n > 0)
	{
		while (i < n)
		{
			_putchar('0');
			_putchar(' ');
			_putchar(' ');
			j = 0;
			while (j < n)
			{
				k = i * j;
				if (k >= 100)
				{
					_putchar('0' + k / 100);
					_putchar('0' + ((k % 100) / 10));
				}
				else if (k > 10 && k < 100)
				{
					_putchar(' ');
					_putchar('0' + ((k % 100) / 10));

				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + k % 10);
				_putchar(',');
				_putchar(' ');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
