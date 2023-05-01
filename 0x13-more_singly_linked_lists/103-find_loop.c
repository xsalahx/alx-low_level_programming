#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_node - checks if the node exist in a previous index
 * @head: list head
 * @node: node
 * @idx: index
 *
 * Return: bool
 */
int check_node(const listint_t *head, const listint_t *node, int idx)
{
	int size = 0;

	while (size < idx && head != NULL)
	{
		if (head == node)
			return (1);
		head = head->next;
		size++;
	}
	return (0);
}

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: list head
 *
 * Return: node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	size_t size = 0;
	listint_t *node = head;

	if (!head)
		return (NULL);
	while (node != NULL)
	{
		node = node->next;
		size++;
		if (check_node(head, node, size))
		{
			return (node);
		}
	}
	return (NULL);
}
