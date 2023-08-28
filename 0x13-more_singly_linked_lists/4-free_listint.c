#include "lists.h"

/**
 * free_listint - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	h = head;
	while (h != NULL)
	{
		head = head->next;
		free(h);
		h = head;
	}

}
