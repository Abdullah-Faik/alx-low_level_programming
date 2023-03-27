#include <string.h>
#include "main.h"
/**
 * print_rev - printing
 * @s: recive number
 */
void print_rev(char *s)
{
	int x = 0;
	int i;

	x = strlen(s);
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
