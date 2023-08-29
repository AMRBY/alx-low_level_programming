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

	if (head == NULL)
		return (NULL);

	h = head;
	while (n < index)
	{
		head = h->next;
		n++;
		h = head;
	}
	if (h)
		return (h);
	return (0);
}
