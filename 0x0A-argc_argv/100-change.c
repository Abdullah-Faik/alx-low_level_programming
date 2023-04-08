#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int q, w, e, r, t;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	argc = atoi(argv[1]);
	q = argc / 25;
	argc = argc % 25;
	w = argc / 10;
	argc = argc % 10;
	e = argc / 5;
	argc = argc % 5;
	r = argc / 2;
	argc = argc % 2;
	t = argc / 1;
	printf("%d\n", q + w + e + r + t);
	return (0);
}
