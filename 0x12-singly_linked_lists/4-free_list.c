#include "lists.h"

/**
 * free_list - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: size_t
 */
void free_list(list_t *head)
{
	list_t *h;

	while (h != NULL)
	{
		h = head->next;
		free(h->str);
		free(h->len);
		free(h->next);
		free(h);
	}
}
