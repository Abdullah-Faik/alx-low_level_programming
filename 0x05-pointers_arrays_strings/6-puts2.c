#include "main.h"
#include <string.h>
/**
 * puts2 - printing
 * @str: recive numbers
*/
void puts2(char *str)
{
	int k = strlen(str);
	int i;

	for (i = 0; i < k; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
