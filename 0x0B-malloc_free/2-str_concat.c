#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int l = 0, i = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[l] != '\0')
		l++;
	while (s2[i] != '\0')
		i++;

	str = malloc(sizeof(char) * (i + l + 1));
	i = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	l = i;
	i = 0;

	while (s2[i] != '\0')
	{
		str[l] = s2[i];
		l++;
		i++;
	}
	str[l] = '\0';
	return (str);
}