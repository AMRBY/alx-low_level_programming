#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - length of strings
 * Description: find digit
 * @p: pointer
 * Return: char
 */
void *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] > 96 && p[i] < 123)
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
