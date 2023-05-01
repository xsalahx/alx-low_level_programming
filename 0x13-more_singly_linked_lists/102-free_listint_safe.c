#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to head node
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *node = *h;
	listint_t *next;

	if (node != NULL)
	{
		next = node;
		while (next != NULL)
		{
			next = node->next;
			free(node);
			node = next;
			size++;
			if (check_node(*h, node, size))
			{
				free(node);
				break;
			}
		}
		*h = NULL;
	}
	return (size);

}
