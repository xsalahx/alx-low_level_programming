#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns the head node's data
 * @head: pointer to head node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node;

	if (*head != NULL)
	{
		n = (*head)->n;
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	return (n);
}
