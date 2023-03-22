#include <stdio.h>

/**
 * powr - calculate the power
 * @a: num1
 * @b: num2
 *
 * Return: a^b
 */
int powr(int a, int b)
{
	int n = 1;
	int i;

	for (i = 0; i < b ; i++)
	{
		n = n * a;  
	}
	return (n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	double n = 0;

	for (i = 1; i < 13; i++)
	{
		for (j = 1; j < 12; j++)
		{
			if (powr(3, i) * powr(5, i) < 1024)
			{
				n = n + powr(3, i) * powr(5, i);
			}
		}
	}
	printf("%.0f\n", n);
	return (0);
}
