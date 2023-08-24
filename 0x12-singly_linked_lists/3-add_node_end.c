#include "lists.h"

/**
 * add_node_end - length of strings
 * Description: find digit
 * @head: int pointer
 * @str: int pointer
 * Return: size_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *pr_node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	pr_node = *head; 
	while (pr_node->next != NULL)
	{
		pr_node = pr_node->next;
	}
	pr_node->next = *head;

	return (*head);
}
