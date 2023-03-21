#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: recive number
*/
void print_to_98(int n)
{
	while (n < 99)
	{

		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
		if (n < 98)
			n++;
		else
			n = n - 1;
	}
	printf("\n");
}
