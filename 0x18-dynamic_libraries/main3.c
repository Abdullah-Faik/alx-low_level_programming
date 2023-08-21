#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
		*dest++ = *src++;
	return (temp);
}
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: pointer to first occurence of c or 0 if not found
*/
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return ((*s == c) ? s : 0);
}
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s++))
		count++;
	return (count);
}
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
			return (--s);
	}
	return (0);
}
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to the beginning of the located substring or 0 if not found
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return (0);
}
