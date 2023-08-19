#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>

/**
 *  * struct op - Struct op
 *   *
 *    * @op: The operator
 *     * @f: The function associated
 *      */
typedef struct itype
{
	char a;
	void (*b)(va_list);
} type;
void print_string(va_list x);
void print_float(va_list x);
void print_int(va_list x);
void print_char(va_list x);

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
