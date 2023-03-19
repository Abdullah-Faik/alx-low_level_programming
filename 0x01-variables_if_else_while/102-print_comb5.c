#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: 0
 */
int main(void)
{

	int i = 0;
	int k = 0;
	int j = 0;
	int l = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			k = i;
			while (k < 10)
			{
				l = j + 1;
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;

			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
