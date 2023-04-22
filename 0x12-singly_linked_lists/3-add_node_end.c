#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: node string
 *
 * Return: new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail = *head;
	char *s;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL && str != NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = s;
	new->len = strlen(s);
	new->next = NULL;
	if (tail != NULL)
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
