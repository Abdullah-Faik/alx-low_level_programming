#include <string.h>
#include <main.h>
/**
 * _puts - printing
 * @str: recive number
 */
void _puts(char *str)
{
	int x = 0;

	x = strlen(str);
	for (int i = 0; i < x; i++)
	{
		_putchar(str[i]);
	}

}
