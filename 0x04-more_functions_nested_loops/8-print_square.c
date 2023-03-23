#include "main.h"
/**
 * print_square - print numbers
 * @size: recive numbers
*/
void print_square(int size)
{
	if (size >= 0)
	{
		int i = 0;
		int j = 0;

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			if (i == size)
				break;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
