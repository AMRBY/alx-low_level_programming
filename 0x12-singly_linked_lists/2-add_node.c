#include "lists.h"

/**
 * add_node - length of strings
 * Description: find digit
 * @head: int pointer
 * @str: int pointer
 * Return: size_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = *head;
	printf("[%ld] %s\n", strlen(str), str);

	return (h);
}
