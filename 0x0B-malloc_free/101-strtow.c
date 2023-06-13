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
	arr = malloc(sizeof(char *) * (l + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || str[i + 1] == '\0')
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
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char **tab;

	tab = strtow("      Talk        is     cheap.       Show      me     the    code.        ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}