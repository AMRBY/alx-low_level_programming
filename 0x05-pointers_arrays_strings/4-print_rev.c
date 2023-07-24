#include "main.h"

/**
 * print_rev - length of strings
 * Description: find digit
 * @s: int pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s+i))
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s+i));
		i--;
	}
	_putchar('\n');
}

