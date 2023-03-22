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
	int counter = 0;

	while (counter <= 50)
	{
		fibo = i + j;
		printf("%ld", fibo);
		j = i;
		i = fibo;
		counter++;
		if (counter == 50)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}
