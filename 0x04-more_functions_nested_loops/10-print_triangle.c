#include "main.h"
/**
 * print_triangle - print numbers
 * @size: recive numbers
*/
void print_triangle(int size)
{
	if (size >= 0)
	{
		int i = 1;
		int j = 0;
		int k = 0;

		while (i <= size)
		{
			j = 0;
			while (j < size - i)
			{
				_putchar(' ');
				j++;
			}
			k = 0;
			while (k < i)
			{
				_putchar('#');
				k++;
			}
			if (i == size)
				break;
			_putchar('\n');
			i++;

		}
		_putchar('\n');

	}
}
