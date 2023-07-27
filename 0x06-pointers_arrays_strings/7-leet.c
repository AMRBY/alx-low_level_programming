#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * leet - length of strings
 * Description: find digit
 * @p: pointer
 * Return: char
 */
char *leet(char *p)
{
	int i = 0;
	int j = 0;
	char t[] = {'a', 'e', 'o', 't', 'l'};
	char u[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {52, 51, 48, 55, 49};

	for (i = 0; p[i] != '\0'; i++)
	{
		j = 0;
		while (t[j] != '\0')
		{
			if (p[i] == t[j] || p[i] == u[j])
			{
				p[i] = v[j];
			}
			j++;
		}
	}
	return (p);
}
