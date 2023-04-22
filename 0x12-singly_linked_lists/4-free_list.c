#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list.
 * @head: first element of list
 */
void free_list(list_t *head)
{
	list_t *next = head;
	while (next != NULL)
	{
		free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
}
