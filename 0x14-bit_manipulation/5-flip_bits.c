#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * @n: number
 * @m: number
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n != m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
