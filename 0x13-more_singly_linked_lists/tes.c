#include "lists.h"

/**
 * add_nodeint_end - length of strings
 * Description: find digit
 * @head: int pointer
 * @n: int pointer
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *pr_h;
	int i = 0;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = NULL;

	pr_h = *head;
	//if (pr_h == NULL)
	//{
		*head = h;
	//	printf("NULL");
	//	printf("\n");
	//}
	//else
	//{
	//	while (pr_h->next != NULL)
	//	{
	//		pr_h = pr_h->next;
	//		printf("%i-", i);
	//		i++;
	//	}
	//	printf("X");
	//	printf("\n");
	if (pr_h != NULL)
		pr_h->next = h;
	//}
	return (*head);
}
