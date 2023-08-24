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
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;

	printf("[%d] %s\n", node->len, node->str);

	return (node->next);
}
