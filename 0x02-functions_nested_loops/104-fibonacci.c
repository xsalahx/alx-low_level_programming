#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long double a = 1;
	long double b = 2;
	long double c;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 95; i++)
	{
		c = a + b;
		printf("%.0Lf, ", c);
		a = b;
		b = c;
	}
	printf("%.0Lf\n", a + b);
	return (0);
}
