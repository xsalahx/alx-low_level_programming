#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to dlistint_t node
 *
 * Return: number of nodes
 */
size_t print_list(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		size++;
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		node = node->next;
	}
	return (size);
}
