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

	while (s[i])
	{
		i++;
	}
	l = i / 2;
	i--;
	while (l--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}

