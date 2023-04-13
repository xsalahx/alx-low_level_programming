#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: array containing all the values from min to max
 */
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);
	range = (int *) malloc((max - min + 1) * sizeof(int));
	if (!range)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		range[i] = min + i;
	return (range);
}
