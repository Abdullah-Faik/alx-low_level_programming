#include "main.h"
#include <stdlib.h>
#include <string.h>


/*
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
*/
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, q = 0;

	if (s1 == NULL)
		s1 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	s = malloc(sizeof(s1) + n);
	q = strlen(s1) + n;
	for (i = 0; i < q - n; q++)
	{
		s[i] = s1[i];
	}
	if (s2 == NULL)
		s2 = "";
	for (q = 0; q < n; q++)
	{
		s[i] = s2[q];
		i++;
	}
	return (s);

}
