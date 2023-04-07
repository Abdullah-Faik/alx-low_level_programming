#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	for (i = 1; i < argc; i++)
	{
		char *s = argv[i];
		int j = 0;

		while (s[j] != '\0')
		{
			if (!isdigit(s[j]))
			{
				printf("Error\n");
				return 1;
			}
			j++;
		}

		sum += atoi(s);
	}

	printf("%d\n", sum);
	return 0;
}
