#include "lists.h"
/**
* add_dnodeint - length of strings
* Description: find digit
* @head: int pointer
* @n: int
* Return: size_t
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->n = n;
	h->next = *head;
	h->prev = NULL;
	if (*head)
		(*head)->prev = h;
	*head = h;
	return (*head);
}
