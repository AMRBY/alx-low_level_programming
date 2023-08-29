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
	listint_t *h, *h_pr;
	size_t z = 0;

	if (*head == NULL)
		return (0);

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h_pr = *head;
	if (idx == 0)
	{
		h->next = h_pr;
		*head = h;
		return (h);
	}
	for (z = 1; z < idx; z++)
	{
		if (h_pr == NULL || h_pr->next == NULL)
			return (NULL);
		h_pr = h_pr->next;
	}
	h->next = h_pr->next;
	h_pr->next = h;
	return (h);
}
