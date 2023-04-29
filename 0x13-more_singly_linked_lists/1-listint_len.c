#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to list_t node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		size++;
		node = node->next;
	}
	return (size);
}
