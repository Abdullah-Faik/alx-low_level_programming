#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	double sum = 0, i1, i2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!isdigit(argv[1][i]))
		{
		printf("Error\n");
		return (98);
		}
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (!isdigit(argv[2][i]))
		{
		printf("Error\n");
		return (98);
		}
		i++;
	}
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);

	sum = i1 * i2;
	printf("%d\n", sum);
	return (0);
}
