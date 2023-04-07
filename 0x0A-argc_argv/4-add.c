#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds numbers
 * @argc: receives
 * @argv: receives
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, i, sum = 0;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		exit(0);
	}

	for (i = 1; i < argc; i++)
	{
		
		s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (strcmp(argv[i], "0") >= 0 && strcmp(argv[i], "9") <= 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
