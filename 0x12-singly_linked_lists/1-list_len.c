#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		size++;
		node = node->next;
	}
	return (size);
}
