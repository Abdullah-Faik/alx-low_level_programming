#include <stdio.h>
/**
 * print_array - printing
 * @a: recive numbers
 * @n: recive numbers
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[n]);
		if (n == n - 1)
			break;
		printf(" ,");
	}
	printf("\n");

}
