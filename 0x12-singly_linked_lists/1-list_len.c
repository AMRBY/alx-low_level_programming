#include "lists.h"

/**
 * list_len - length of strings
 * Description: find digit
 * @h: int pointer
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *head;

	head = h;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}

	return (i);
}
