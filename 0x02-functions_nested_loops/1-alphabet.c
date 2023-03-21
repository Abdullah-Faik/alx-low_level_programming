#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- print word
*/
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar("\n");

}
