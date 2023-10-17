#include <stdio.h>

void reset_to_98(int *n)
{
	        *n = 98;
}

int main(void)
{
	char *p="pointer";
	char t[]="array";
	int n = 11;
	int *m;

	printf("&n= %p\n",&n);
	printf("n= %d\n",n);
	m = &n;
	*m =98;
	printf("m= %p\n",m);
	printf("*m= %d\n",*m);

	//reset_to_98(&n);
	printf("n= %d\n",n);
/**	
	p = &t[1];
	printf("value (p[0]): %c\n",p[0]);
	printf("value (*p): %c\n",*p);
	printf("value (p): %s\n",p);
	printf("address (p): %p\n",p);
	printf("address (&p): %p\n",&p);
	printf("address (&p[0]): %p\n",&p[0]);

	printf("value (t[0]): %c\n",t[0]);
	printf("value (*t): %c\n",*t);
	printf("value (t): %s\n",t);
	printf("address (t): %p\n",t);
	printf("address (&t): %p\n",&t);
	printf("address (&t[0]): %p\n",&t[0]);
*/

return (0);
}
