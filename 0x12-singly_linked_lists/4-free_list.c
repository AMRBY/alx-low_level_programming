#include "lists.h"

/**
 * free_list - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: size_t
 */
void free_list(list_t *head)
{
	list_t *h = head;

	while (h != NULL)
	{
		head = head->next;
		free(h->str);
		free(h);
		h = head;
	}
}
