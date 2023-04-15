#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * mult - multiplies two numbers
 * @argv: array of arguments
 * Return: 0
*/
void mult(char *argv[])
{
	int d1, d2, res;
	int l1, l2, sum;
	int i, j;
	int *p;

	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	p = calloc(l1 + l2, sizeof(int));
	if (p == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = l1 - 1; i >= 0; i--)
	{
		d1 = argv[1][i] - '0';
		for (j = l2 - 1; j >= 0; j--)
		{
			d2 = argv[2][j] - '0';
			res = d1 * d2;
			sum = res + p[i + j + 1];
			p[i + j + 1] = sum % 10;
			p[i + j] += sum / 10;
		}
	}
	i = 0;
	while (i < l1 + l2 &&  p[i] == 0)
		i++;

	for (j = i; j < l1 + l2; j++)
	{
		printf("%d", p[j]);
	}

	printf("\n");
	free(p);

}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

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
		exit(98);
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
	mult(argv);
	return (0);
}
