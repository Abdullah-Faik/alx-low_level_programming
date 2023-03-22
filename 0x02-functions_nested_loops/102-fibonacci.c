# include <stdio.h>
/**
 * main - print
 * Return: 0
*/
int main(void)
{
	long long int i = 1;
	long long int j = 0;
	long long int fibo = 1;
	int counter = 0;

	while (counter < 50)
	{
		fibo = i + j;
		printf("%lld", fibo);
		j = i;
		i = fibo;
		counter++;
		if (counter == 49)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
