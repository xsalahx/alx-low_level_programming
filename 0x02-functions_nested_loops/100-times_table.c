#include "main.h"

/**
 * print_number - print number using _putchar
 * @n: Number
 */
void print_number(int n)
{
	int p = 10;
	int i;
	int s = (n > 0) - (n < 0);

	while (1)
	{
		if (n / p == 0)
		{
			break;
		}
		p = p * 10;
	}
	for (i = p; i >= 10; i = i / 10)
	{
		_putchar('0' + (s * ((n % i) / (i / 10))));
	}
}

/**
 * len - lenght of a number
 * @n: number
 *
 * Return: number of numbers
 */
int len(int n)
{
	int i = 1;
	int p = 10;

	while (1)
	{
		if (n / p == 0)
		{
			break;
		}
		i++;
		p = p * 10;
	}
	return (i);
}

/**
 * print_times_table - Prints the n times table
 * @n: number
 */
void print_times_table(int n)
{
	int i, j, k = 0;
	int m;

	if (n <= 15 && n >= 0)
	{

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j != 0)
				{
					for (k = 0; k < len(n) - len(m) + 1; k++)
					{
						_putchar(' ');
					}
				}
				print_number(m);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
