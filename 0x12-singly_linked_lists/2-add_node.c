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
	size_t i = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	node->str = strdup(str);
	node->len = i;
	node->next = *head;
	*head = node;

	return (*head);
}
