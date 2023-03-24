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
	print_sign(n);
	for (i = p; i >= 10; i = i / 10)
	{
		_putchar('0' + (s * ((n % i) / (i / 10))));
	}
}
