#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, l = 0, k = 0;
	char *arr;

	if (ac < 1 || av == NULL || ac == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l += 1;
		}
	}

	arr = malloc(sizeof(char) * (ac + l + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[k] = av[i][j];
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k + 1] = '\0';
	return (arr);

}
