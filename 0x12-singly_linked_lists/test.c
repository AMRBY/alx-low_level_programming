#include "lists.h"
#include <stdio.h> 

typedef struct s_type {
	int value;
	struct s_type *next;
} t_type;

int main(void){

	t_type *p, n4, n1, n2, n3;

	n1.value = 11;
	n2.value = 22;
	n3.value = 33;
	n4.value = 44;

	p = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	n4.next = &n3;
	n2.next = &n4;

	while (p != NULL)
	{
		printf("%d - ", p->value);
		p = p->next;
	}
	printf("\n");
return (0);
}
