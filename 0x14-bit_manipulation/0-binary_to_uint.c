#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number (char *)
 *
 * Return: number (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '1' && *b != '0')
			return (0);
		n = n ^ (unsigned int) (*b - '0');
		if (*(b + 1) != '\0')
			n = n << 1;
	}
	return (n);
}
