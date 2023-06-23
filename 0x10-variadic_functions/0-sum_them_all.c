#include "variadic_functions.h"
/**
 * sum_them_all - sum all the arguments
 * @n: number of arguments
 * Return: sum of all the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	int sum = 0;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, int);
	}
	va_end(ar);
	return (sum);
}
