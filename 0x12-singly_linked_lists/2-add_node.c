#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head node
 * @str: node string
 *
 * Return: new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	return (new);
}
