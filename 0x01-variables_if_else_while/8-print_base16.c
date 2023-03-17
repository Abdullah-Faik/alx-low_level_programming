#include <stdio.h>

/* more headers goes there */
/**
 * main - ptiny alpha
 *
 * Return: 0
*/
int main(void)
{
	char start = '0';

	while (start <= '9')
	{
		putchar(start);
		start += 1;
	}
	start = 'a';
	while (start <= 'f')
	{
		putchar(start);
		start += 1;
	}
	putchar('\n');

	return (0);
}
