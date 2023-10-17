#include <stdio.h> 
#include <stdlib.h>

typedef struct s_type {
	int value;
	struct s_type *next;
} t_type;

t_type *add_node(int value)
{
	t_type *result;
	result = malloc(sizeof(t_type));
	result->value = value;
	result->next = NULL;
	return(result);
}

void print_list(t_type *head)
{
	while (head != NULL)
	{
		printf("%d - ", head->value);
		head = head->next;
	}
}

t_type *add_to_head(t_type *p, t_type **head)
{
	p->next = *head;
	*head = p;
	return (*head);
}

t_type *add_after_node(int v, t_type *head)
{
	t_type *p = head;
	while(p->next != NULL)
	{
		if (p->value != v)
			p
		else 
			add_node(75);
	}
	return ();
}

int main(void){
	t_type *head = NULL, *p;

	for (int i = 0; i < 10; i++)
	{
		p = add_node(i);
		add_to_head(p, &head);
	}
	add_after_node(7, head);
	print_list(head);
	printf("\n");
	return (0);
}
