#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to liked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *node;


	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	node = *head;

	while (node->next != NULL)
	{
		*head = node->next;
		node->next = next;
		next = node;
		node = *head;
	}
	node->next = next;
	return (*head);
}
