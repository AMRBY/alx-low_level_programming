#include "lists.h"

/**
 * insert_nodeint_at_index - length of strings
 * Description: find digit
 * @head: int pointer
 * @idx: int pointer
 * @n: int pointer
 * Return: int
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hh, *h, *h_pr;
	size_t z = 0;

	if (*head == NULL)
		return (0);

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	hh = *head;
	for (z = 0; z < idx; z++)
	{
		h_pr = *head;
		*head = h_pr->next;
	}
	h->n = n;
	h->next = h_pr->next;
	h_pr->next = h;
	*head = hh;
	return (h);
}
