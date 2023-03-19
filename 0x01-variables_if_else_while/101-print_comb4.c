#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{

	int i = 0;

	for (size_t i = 0; i < 8; i++)
	{
		for (size_t j = i + 1; j < 9; j++)
		{
			for (size_t k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					break;
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
