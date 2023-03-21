#include <stdio.h>

#include "main.h"
/**
 * main - print word
 *
 * Return: 0
*/
int main(void)
{
	char i[] = "_putchar";
	int counter = 0;

	while (counter < 8)
	{
		_putchar(i[counter]);
		counter++;
	}
	_putchar('\n');

	return (0);
}
