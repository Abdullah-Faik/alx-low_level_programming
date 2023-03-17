#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{

	char start = 'z';

	while (start >= 'a')
	{
		putchar(start);
		start -= 1;
	}
	putchar('\n');

	return (0);
}

