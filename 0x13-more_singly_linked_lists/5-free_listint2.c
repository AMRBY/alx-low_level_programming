#include "lists.h"

/**
 * free_listint2 - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	h = *head;
	while (h != NULL)
	{
		*head = h->next;
		free(h);
		h = *head;
	}
	head = NULL;

}
