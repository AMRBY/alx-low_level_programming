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
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
	       	'?', '"', '(', ')', '{', '}'};

	if (p[0] >= 'a' && p[0] <= 'z')
		p[0] = p[0] - 32;
	i++;
	while (p[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (p[i] == sep[j])
			{
				if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
					p[i + 1] = p[i + 1] - 32;
					i++;
			}
			j++;
		}
		i++;
	}
	return (p);
}
