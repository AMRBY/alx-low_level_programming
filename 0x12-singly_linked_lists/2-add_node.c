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
	const char *z;

	if (str == NULL || head == NULL)
		return (NULL);

	z = malloc(sizeof(char) * strlen(str));
	if (z == NULL)
		return (NULL);
	z = str;
	h = *head;
	printf("[%ld] %s\n", strlen(str), z);

	return (h);
}
