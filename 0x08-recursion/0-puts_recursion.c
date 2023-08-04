#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - length of strings
 * Description: find digit
 * @s: char pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');

}
