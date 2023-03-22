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
	int n = 2;

	for (i = 0; i < 47; i++)
	{
		c = a + b;
		if (c < 4000000)
		{
			n = n + c;
		}
		a = b;
		b = c;
	}
	return (0);
}
