#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			l += 1;
	}
	if (l == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * l);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			{
				k += 1;
			}
			arr[m] = malloc(sizeof(char) * (k + 1));
			if (arr[m] == NULL)
			{
				for (j = 0; j < m; j++)
					free(arr[j]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < k; j++)
			{
				arr[m][j] = str[i];
				i++;
			}
			arr[m][j] = '\0';
			m++;
			k = 0;
		}
	}
	arr[m] = NULL;
	return (arr);

}