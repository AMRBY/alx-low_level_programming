#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - function
* Description: its name
* @separator: argv
* @n: number
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *s;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
