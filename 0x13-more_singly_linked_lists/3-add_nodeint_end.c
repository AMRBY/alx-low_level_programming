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

	while (pr_h == NULL)
	{
		pr_h->next = h;
		h = pr_h;
	}
	
	return (h);
}
