#include <stdio.h>

/* more headers goes there */
/**
 * main - ptiny alpha
 *
 * Return: 0
*/
int main(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		putchar(start);
		start += 1;
	}
	putchar('\n');

	return (0);
}
