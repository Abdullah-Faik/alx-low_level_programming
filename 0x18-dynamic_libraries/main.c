#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
*/
int _putchar(char c)
{
	(void) c;
	return 0;
}
/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if c is lowercase, otherwise 0
*/
int _islower( int c)
{
	(void) c;
	return 0;
}
/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * _abs - computes the absolute value of an integer
 * @n: integer to compute
 * Return: absolute value of n
*/
int _abs(int n)
{
	return (n < 0 ? -n : n);
}
/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
