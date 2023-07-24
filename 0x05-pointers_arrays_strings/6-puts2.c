#include "main.h"

/**
 * puts2 - length of strings
 * Description: find digit
 * @str: int pointer
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

