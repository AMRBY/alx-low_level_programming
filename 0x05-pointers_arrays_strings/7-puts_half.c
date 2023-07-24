#include "main.h"
#include <stdio.h>

/**
 * puts_half - length of strings
 * Description: find digit
 * @str: int pointer
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i])
	{
		i++;
	}
	if (i % 2 != 0)	
	{
		len = (i +1) / 2;
	}
	else
	{
		len = i / 2;
	}
	while (len < i)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

