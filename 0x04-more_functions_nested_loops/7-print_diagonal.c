#include "main.h"
/**
 * print_diagonal - print numbers
 * @n: recive numbers
*/
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;
	while (i <= n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
