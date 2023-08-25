#include "lists.h"
#include <stdio.h> 

typedef struct s_type {
	int value;
	struct s_type *next;
} t_type;

t_type add_node(int value)
{
	t_type *result;
	result->value = value;
	result->next = NULL;
	return(result);
}

int main(void){
	t_type *head, *p;

	while (p != NULL)
	{
		head = add_node(10);
		head->next = tmp;
		add_node(20);
		add_node(30);

		printf("%d - ", p->value);
		p = p->next;
	}
	printf("\n");
return (0);
}
