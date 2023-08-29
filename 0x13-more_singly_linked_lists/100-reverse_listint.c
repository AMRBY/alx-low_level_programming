#include "lists.h"

/**
 * reverse_listint - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: int
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *n;

	prev = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = n;
	}

	*head = prev;
	return (*head);
}
