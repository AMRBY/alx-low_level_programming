#include "lists.h"

/**
 * print_list - length of strings
 * Description: find digit
 * @h: int pointer
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *head;

	head = h;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);

		head = head->next;
		i++;
	}

	return (i);
}
