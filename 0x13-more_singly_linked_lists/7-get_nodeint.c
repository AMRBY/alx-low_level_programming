#include "lists.h"

/**
 * get_nodeint_at_index - length of strings
 * Description: find digit
 * @head: int pointer
 * @index: int pointer
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int n = 0;

	h = head;
	while (n < index && h->next != NULL)
	{
		head = h->next;
		n++;
		h = head;
	}
	if (n < index)
		return (NULL);
	return (h);
}
