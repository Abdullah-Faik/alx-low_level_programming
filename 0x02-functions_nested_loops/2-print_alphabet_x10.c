#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- print word
*/
void print_alphabet(void)
{
	char x;
	int i = 0;
	while (i <= 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}

}
