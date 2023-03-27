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

	i =  (k - (k % 2)) / 2;
	for (; i < k ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
