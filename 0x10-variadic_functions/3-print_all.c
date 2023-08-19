#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - function
* Description: its name
* @format: number
* Return: 0
*/
void print_int(va_list x)
{
	printf("%i",va_arg(x, int));
}
void print_char(va_list x)
{
	printf("%c",va_arg(x, int));
}
void print_float(va_list x)
{
	printf("%f",va_arg(x, double));
}
void print_string(va_list x)
{
	char *w = (va_arg(x, char*) == NULL) ? "(nil)" : va_arg(x, char*);
	printf("%s", w);
}

void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0, j = 0, k = 0;
	void (*fun)(va_list);
	type typ[] = {
                {'c', print_char},
                {'i', print_int},
                {'f', print_float},
                {'s', print_string},
                {'\0', NULL}
        };
	va_start(p, format);
	while (format[i])
	{
		while (j < 4 && format[i] != typ[j].a)
			j++;

		fun = typ[j].b;
		if (typ[j].b != NULL)
		{
			if (k != 0)
				printf(", ");	

			fun(p);
		}
		k = 1;
		j = 0;
		i++;
	}
	printf("\n");
	va_end(p);
}
