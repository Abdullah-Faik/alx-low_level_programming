# include <stdio.h>
/**
 * main - print
 * Return: 0
*/
int main(void)
{
	long int i = 1;
	long int j = 0;
	long int fibo = 1;
	long int counter = 0;

	while (1)
	{
		fibo = i + j;
		if (fibo % 2 == 0)
			counter = counter + fibo;
		j = i;
		i = fibo;
		if (j + i >= 4000000)
			break;
	}
	printf("%ld", counter);
	printf("\n");
	return (0);
}
