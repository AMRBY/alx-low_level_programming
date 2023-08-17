#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - function
* Description: its name
* @separator: argv
* @n: number
* Return: 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;


	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%i",va_arg(p, int));
		if (i != n - 1)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(p);
}
