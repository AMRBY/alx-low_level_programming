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
	int j = 0;
	char tmp, l;

	while (*(s + i))
	{
		i++;
	}
	i--;
	l = i / 2;
	while (i > l)
	{
		tmp = *(s+j);
		*(s+j) = *(s+i);
		*(s+i) = tmp;
		j++;
		i--;
	}
}

