#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	char d = ((n > 0) - (n < 0)) * (n % 10);

	_putchar('0' + d);
	return (d);
}
