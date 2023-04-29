#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to list_t node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		size++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (size);
}
