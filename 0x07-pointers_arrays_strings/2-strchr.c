#define NULL ((void *)0)
/**
 * _strchr - locate the first occurrence of a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
			return (s[n]);
		n++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);

}
