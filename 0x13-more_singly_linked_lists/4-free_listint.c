#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: first element of list
 */
void free_listint(listint_t *head)
{
	listint_t *next = head;

	while (next != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
