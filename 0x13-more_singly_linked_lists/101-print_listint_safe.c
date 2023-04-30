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
 * print_listint_safe - prints a listint_t linked list.
 * @head: head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *node = head;

	while (node != NULL)
	{
		if (check_node(head, node, size))
		{
			printf("-> [%p] %d\n", (void *) node, node->n);
			exit(98);
		}
		else
		{
			printf("[%p] %d\n", (void *) node, node->n);
			node = node->next;
			size++;
		}
	}
	return (size);
}
