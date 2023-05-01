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
	listint_t *node;
	listint_t *next;

	if (h != NULL)
	{
		node  = *h;
		next = node;
		while (node != NULL)
		{
			if (node - node->next > 0)
			{
				next = node->next;
				free(node);
				node = next;
				size++;
			}
			else
			{
				free(node);
				size++;
				break;
			}
		}
		*h = NULL;
	}
	return (size);

}
