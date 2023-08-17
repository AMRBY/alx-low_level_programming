#include "variadic_functions.h"
#include <stdio.h>
/**
* sum_them_all - function
* Description: its name
* @n: argv
* Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);

	va_end(p);
	return (sum);
}
