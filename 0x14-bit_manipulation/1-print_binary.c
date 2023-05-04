#include "main.h"



/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int nb = 1;
	unsigned long int nc = n;

	while (nc > 1)
	{
		nc = nc >> 1;
		nb++;
	}

	while (nb != 0)
	{
		_putchar(((n >> (nb - 1)) & 1) + '0');
		nb--;
	}
}
