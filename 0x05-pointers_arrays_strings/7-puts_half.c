#include <string.h>
#include "main.h"
/**
 * puts_half - printing the second of halg of string
 * @str: recive numbers
*/
void puts_half(char *str)
{
	int k = strlen(str);
	int i;

	for (i = k / 2; i < k ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
