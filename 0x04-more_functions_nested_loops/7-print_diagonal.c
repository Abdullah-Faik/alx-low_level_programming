#include "main.h"
/**
 * print_diagonal - print numbers
 * @n: recive numbers
*/
void print_diagonal(int n)
{
	if (n >= 0)
	{
		int i = 0;
		int j = 0;

		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			_putchar('\\');
			if (i == n)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
