#include <stdio.h>
/**
 * main - print fizz buzz
 * Return: 0
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
		if (i == 101)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
