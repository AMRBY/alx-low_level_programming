#include "lists.h"

/**
 * sum_listint - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		n += head->n;
		head = head->next;
	}
	n += head->n;
	return (n);
}
