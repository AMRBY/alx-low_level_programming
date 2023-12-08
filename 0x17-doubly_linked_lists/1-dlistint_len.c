#include "lists.h"
/**
* dlistint_len - length of strings
* Description: find digit
* @h: int pointer
* Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
