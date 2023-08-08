#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat  - find uppercase
 * Description: find uppercase
 * @s1 : arg
 * @s2 : arg
 * Return: a
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0;
	int j = 0;
	int z = 0;
	int y = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);
	while (z < i && *s1 != NULL)
	{
		a[z] = s1[z];
		z++;
	}
	while (y < j && *s2 != NULL)
	{
		a[z] = s2[y];
		z++;
		y++;
	}
	return (a);
}
