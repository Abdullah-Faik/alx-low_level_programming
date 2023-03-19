#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{

	int i = 0;
	int j = 0;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
