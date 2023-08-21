#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * _puts - prints a string to stdout
 * @s: string to print
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
}
/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (_isdigit(*s))
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
