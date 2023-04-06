#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: array size
 * @c: char
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size)
	{
		a = (char *) malloc(size * sizeof(c));
		if (a)
		{
			unsigned int i;

			for (i = 0; i < size; i++)
			{
				a[i] = c;
			}
		}
		else
			return (0);
	}
	else
		return (0);
	return (a);
}
