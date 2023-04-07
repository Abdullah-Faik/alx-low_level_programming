#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		exit(0);
	}

	for (i = 1; i < argc; i++)
	{
		if (strcmp(argv[i], "0") >= 0 && strcmp(argv[i], "9") <= 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			exit(0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
