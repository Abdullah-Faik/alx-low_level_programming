#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int len = 0, wordlen = 0, i = 0, k = 0, j = 0, l = 0;
	char **arr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; i <= _strlen(str); i++)
	{
		wordlen = 0;
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
		{
			wordlen++;
			j++;
			i++;
		}
		if (wordlen > 0)
			len += 1;
	}

	if (len == 0)
		return NULL;
	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
	{
		wordlen = 0;
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
		{
			wordlen++;
			j++;
			i++;
		}
		if (wordlen > 0)
		{
			arr[k] = malloc(sizeof(char) * (wordlen + 1));
			if (arr[k] == NULL)
			{
				for (k = k - 1; k >= 0; k--)
					free(arr[k]);
				free(arr);
				return (NULL);
			}
			for (l = 0; l < wordlen; l++)
			{
				arr[k][l] = str[i - wordlen + l];
			}
			arr[k][l] = '\0';
			k++;
		}
	}
	return (arr);
}
