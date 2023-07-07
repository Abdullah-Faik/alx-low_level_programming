#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	/*n & 1 ? printf("1") : printf("0");*/
	n & 1 ? _putchar('1') : _putchar('0');
}


/*
* this my sol
*{
*	unsigned long int i = 0, j = 0, k = 64;
*	int f = 0;
*	int res = 0;
*void print_binary(unsigned long int n)
*	while (n > 0)
*	{
*		k = k >> 1;
*		res = n - k;
*		printf("%d\n", res);
*		if (res >= 0)
*		{
*			f = 1;
*			printf("1");
*			_putchar('1');
*		}
*		else
*		{
*			n = n + k;
*			if (f == 1)
*			   printf("0");
*			     _putchar('0');
*		}
*		printf("%lu\n", n);
*	}
*}
*/
