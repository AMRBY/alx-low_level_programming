#include <stdio.h>

int main(void)
{
typedef struct type{int a; char *b;} typ;

	char *p;
	typ var[]={{1,"AMR"},{3,"SAID"},{5,"YOUSSEF"}};


	//p = var[1].b;
	printf("%c\n", var[1].b[1]);
	return (0);
}
