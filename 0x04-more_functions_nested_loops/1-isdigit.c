#include "main.h"
/**
 *  _isdigit - check uppers
 * @c: recive number
 * Return: 1 or 0
*/
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
