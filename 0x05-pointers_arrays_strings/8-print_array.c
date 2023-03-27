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
		printf("%d", a[i]);
		if (n == n - 2)
			break;
		printf(" ,");
	}
	printf("\n");

}
