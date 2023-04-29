#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to head
 * @index: node's index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *n;

	if (index == 0)
	{
		if (node == NULL)
			return (-1);
		*head = node->next;
		free(node);
	}
	else
	{
		while (i < index - 1 && node != NULL)
		{
			node = node->next;
			i++;
		}
		if (node != NULL && node->next != NULL)
		{
			n = node->next;
			node->next = n->next;
			free(n);
		}
		else
			return (-1);
	}
	return (1);
}
