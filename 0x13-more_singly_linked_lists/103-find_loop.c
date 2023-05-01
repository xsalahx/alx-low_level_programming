#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: list head
 *
 * Return: node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	int size = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		if (check_node(head, node, size))
			return (node);
		node = node->next;
	}
	return (node);
}
