#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - length of strings
 * Description: find digit
 * @p: pointer
 * Return: char
 */
char *cap_string(char *p)
{
	int i = 0;
	int j = 0;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!'
		, '?', '"', '(', ')', '{', '}', '\0'};

	if (p[0] < 96 && p[0] > 123)
		p[0] = p[0] - 32;

	while (p[i] != '\0')
	{
		while (sep[j] != '\0')
		{
			if (p[i] == sep[j])
				p[i + 1] = p[i + 1] - 32;
			j++;
		}
		i++;
	}
	return (p);
}
