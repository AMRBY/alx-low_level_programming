#include "lists.h"

/**
 * add_nodeint_end - length of strings
 * Description: find digit
 * @head: int pointer
 * @n: int pointer
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *pr_h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = NULL;

	pr_h = *head;
	if (pr_h == NULL)
		*head = h;
	else
	{
		while (pr_h->next != NULL)
		{
			pr_h = pr_h->next;
		}
		pr_h->next = h;
	}
	return (h);
}
