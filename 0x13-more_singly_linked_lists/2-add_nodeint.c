#include "lists.h"

/**
 * add_nodeint - length of strings
 * Description: find digit
 * @head: int pointer
 * @n: int pointer
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return NULL;
	h = *head;
	//while (h != NULL)
	//{
		printf("%i\n", n);	
		h = h->next;
	//}

	return (h);
}
