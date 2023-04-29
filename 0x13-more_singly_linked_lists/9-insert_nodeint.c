#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head pointer
 * @idx: position index
 * @n: node data
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *new;
	listint_t *next;

	if (head != NULL)
	{
		node = *head;
		new = (listint_t *) malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		while (i < idx - 1 && node != NULL)
		{
			node = node->next;
			i++;
		}
		if (node != NULL)
		{
			next = node->next;
			node->next = new;
			new->next = next;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
