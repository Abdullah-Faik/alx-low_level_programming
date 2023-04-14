#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


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
	size_t s1_len, s2_len, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n > s2_len)
		n = s2_len;

	total_len = s1_len + n;

	s = malloc(total_len + 1);

	if (s == NULL)
		return (NULL);

	strncpy(s, s1, s1_len);
	strncpy(s + s1_len, s2, n);

	s[total_len] = '\0';

	return (s);
}
