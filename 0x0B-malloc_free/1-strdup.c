#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return NULL;

	while (str[len] != '\0')
		len += 1;
	
	dup = malloc(sizeof(char) * (len + 1));

	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
