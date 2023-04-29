#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t linked list
 * @head: list head
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
