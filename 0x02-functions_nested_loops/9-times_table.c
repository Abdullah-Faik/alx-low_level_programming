#include "main.h"
/**
 * times_table - print time
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar('0' + i * j);
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}

}
