#include <stdio.h>
/**
 * main - printing
 * Return: 0
*/
int main(void)
{
	long int x = 612852475143;
	int j = 2;
	int i = 0;

	while (i < x / 2)
	{
		while (x % j == 0)
		{
			x = x / j;
			printf("%d, ", j);
		}
		j++;
		i++;
	}
	printf("%ld\n", x);
	return (0);
}
