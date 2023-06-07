#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - returns the value of x raised to the power of y.
 * @s: the integer s
 * @len: the integer len
 *
 * Return: int with the value of x to the power of y
*/
int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	else if (s[0] == s[len - 1])
	{
		return (is_palindrome_helper(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - returns the value of x raised to the power of y.
 * @s: the CHAR s
 *
 * Return: int with the value of x to the power of y
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (is_palindrome_helper(s, len));
	}
}
