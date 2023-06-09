#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: Matrix
 * @size: Matrix size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + size * i + i);
		sum2 = sum2 + *(a + size * i + size - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
