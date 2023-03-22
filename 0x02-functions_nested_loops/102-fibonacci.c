#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 47; i++)
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
	}
	printf("%ld\n", a + b);
	return (0);
}
