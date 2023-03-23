#include "main.h"
/**
 * _isupper - check uppers
 * @c: recive number
 * Return: 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' <= 'Z')
		return (1);
	else
		return (0);
}
