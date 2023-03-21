#include "main.h"
/**
 * times_table - print time
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < 10)
	{
		j = 1;
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		while (j < 10)
		{

			k = i * j;
			if (k < 10)
			{
				_putchar(' ');
				_putchar('0' + k % 10);
			}
			else
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}

}
