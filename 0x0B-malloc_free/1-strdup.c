#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup  - find uppercase
 * Description: find uppercase
 * @str : arg
 * Return: a
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);
	while (j < i)
	{
		a[j] = str[j];
		j++;
	}
	return (a);
}
