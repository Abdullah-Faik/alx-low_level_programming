#include "main.h"
/**
 * print_times_table - print table
 * @n: recive numbers
*/
void print_times_table(int n)
{
	int k;
	int i = 0;
	int j = 1;

	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = i * j;
				if (k >= 100)
				{
					_putchar('0' + k / 100);
					_putchar('0' + ((k % 100) / 10));
				}
				else if (k >= 10)
				{
					_putchar(' ');
					_putchar('0' + ((k % 100) / 10));

				}
				else if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + k % 10);
				if (j == n)
					break;
				_putchar(',');
				_putchar(' ');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
