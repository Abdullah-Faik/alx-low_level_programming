#include <string.h>
#include "main.h"
/**
 * _puts - printing
 * @str: recive number
 */
void _puts(char *str)
{
	int x = 0;
	int i;

	x = strlen(str);
	for (i = 0; i < x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
