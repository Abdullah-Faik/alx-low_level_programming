/**
* print_diagsums - Calculates the sum of the two diagonals of a square matrix.
* @a: Pointer to the first element of the matrix.
* @size: Size of the matrix.
* Return: void.
*/
void print_diagsums(int *a, int size);
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += *(a + i);
	}

	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		sum2 += *(a + i);
	}

	printf("Diagonal sum 1: ");

	int digit;

	if (sum1 == 0)
	{
		putchar('0');
	}
	else
	{
		while (sum1 > 0)
		{
			digit = sum1 % 10;
			putchar(digit + '0');
			sum1 /= 10;
		}
	}

	putchar('\n');
	printf("Diagonal sum 2: ");

	if (sum2 == 0)
	{
		putchar('0');
	}
	else
	{
		while (sum2 > 0)
		{
			digit = sum2 % 10;
			putchar(digit + '0');
			sum2 /= 10;
		}
	}

	putchar('\n');
}
