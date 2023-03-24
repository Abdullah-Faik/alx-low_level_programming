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
	int k = 0;

	while (i < x / 2)
	{
		while (x % j == 0)
		{
			x = x / j;
			if (j > k)
				k = j;
		}
		j++;
		i++;
	}
	if (x > k)
		k = x;
	printf("%ld\n", k);
	return (0);
}
