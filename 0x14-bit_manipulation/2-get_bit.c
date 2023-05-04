#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number
 * @index: index of bit
 *
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n & (1 << index)) >> index);
}
