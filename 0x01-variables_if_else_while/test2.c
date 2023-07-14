#include <stdio.h>
int main()
{
char c;
c = '\n';

putchar(c);
putchar('\'');
putchar('\t');
putchar('\0');
putchar('A');
c = 65;
putchar('a');
c = '\n';
putchar(c);
}
