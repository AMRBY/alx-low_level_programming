#include "main.h"

/**
 * rev_string - length of strings
 * Description: find digit
 * @s: int pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}

