#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - length of strings
 * Description: find digit
 * @s: char pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(&s[i + 1]);
		putchar(s[i]);
	}
}
