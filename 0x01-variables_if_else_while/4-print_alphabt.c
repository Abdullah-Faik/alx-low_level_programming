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
		if (start == 'e' || start == 'q')
		{
			start += 1;
			continue;
		}
		putchar(start);
		start += 1;
	}
	putchar('\n');

	return (0);
}
