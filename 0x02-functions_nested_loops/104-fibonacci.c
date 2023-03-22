#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a1 = 0;
	unsigned long int a2 = 1;
	unsigned long int b1 = 0;
	unsigned long int b2 = 2;
	unsigned long int c1;
	unsigned long int c2;
	int i;

	printf("1, 2, ");
	for (i = 0; i < 95; i++)
	{
		c2 = (a2 + b2) % 1000000000;
		c1 = (a1 + b1) + (a2 + b2) / 1000000000;
		if (c1 != 0)
		{
			printf("%lu", c1);
			printf("%09lu, ", c2);
		}
		else
		{
			printf("%lu, ", c2);
		}
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}
	c2 = (a2 + b2) % 1000000000;
	c1 = (a1 + b1) + (a2 + b2) / 1000000000;
	if (c1 != 0)
	{
		printf("%lu", c1);
	}
	printf("%09lu\n", c2);
	return (0);
}
