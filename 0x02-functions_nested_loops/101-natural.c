#include <stdio.h>
/**
 * main - printing
 * Return: 0
*/
int main(void)
{
	int j = 3;
	int i = 5;
	int sum = 0;

	while (j <= 1024)
	{
		sum = sum + j;
		j += 3;
	}
	while (i <= 1024)
	{
		sum = sum + i;
		i += 5;
	}
	printf("%d\n", sum);
	return (0);
}
