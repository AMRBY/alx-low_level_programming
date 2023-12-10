#include "lists.h"
/**
* add_dnodeint_end - length of strings
* Description: find digit
* @head: int pointer
* @n: int
* Return: size_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *end = *head;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->n = n;
	h->next = NULL;

	if (*head == NULL)
	{
		h->prev = *head;
		*head = h;
	}
	else
	{
		while (end->next)
			end = end->next;
		h->prev = end;
		end->next = h;
	}
	return (*head);
}
