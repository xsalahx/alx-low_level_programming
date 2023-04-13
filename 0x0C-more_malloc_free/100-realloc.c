#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory block
 * @old_size: size of memory block
 * @new_size: new size of mermory block
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (new_size < old_size ? new_size : old_size); i++)
		*((char *) p + i) = *((char *) ptr + i);
	free(ptr);
	return (p);
}
