#include <stdio.h>
/**
 * string_toupper - upper case
 * @s: recive
 * Return: edited string
*/
char *string_toupper(char *s)
{
	int q = 32, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - q;
		i++;
	}
	return (s);
}
