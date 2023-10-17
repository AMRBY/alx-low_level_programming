#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char p[]="WALCOTT";	
	int i;

	for (i = 0; p[i]!='\0'; i++)
		printf("p= %c\n", p[i]);

	return (0);
}

