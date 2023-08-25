#include "lists.h"

/**
 * free_list - length of strings
 * Description: find digit
 * @head: int pointer
 * Return: size_t
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		free(head->str);
		free(head->len);
		free(head->next);
		free(head);
	}
}
