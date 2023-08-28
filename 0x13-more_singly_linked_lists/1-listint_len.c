#include "lists.h"

/**
 * listint_len - length of strings
 * Description: find digit
 * @h: int pointer
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *head;

	head = h;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}

	return (i);
}
