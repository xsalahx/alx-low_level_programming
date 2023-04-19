#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array
 * @size: array size
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
