#include <stdio.h>

/* more headers goes there */
/**
 * main - ptiny alpha
 *
 * Return: 0
*/
int main(void)
{
	int start = 0;

	while (start <= 9)
	{
		putchar(start + '0');
		if (start != 9)
		{
			putchar(',');
			putchar(' ');
		}
		start += 1;
	}
	putchar('\n');
	return (0);
}
