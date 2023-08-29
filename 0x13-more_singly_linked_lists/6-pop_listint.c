#include "lists.h"

/**
 * pop_listint - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head == NULL)
		return (0);

	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
