#include "lists.h"

/**
 * print_listint - length of strings
 * Description: find digit
 * @h: int pointer
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *head;

	head = h;
	while (head != NULL)
	{
		printf("%i\n", head->n);
		i++;
		head = head->next;
	}

	return (i);
}
