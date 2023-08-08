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

	if (s1 != NULL)
		while (s1[i])
			i++;
	if (s2 != NULL)
		while (s2[j])
			j++;
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);
	while (z < i)
	{
		a[z] = s1[z];
		z++;
	}
	while (y < j)
	{
		a[z] = s2[y];
		z++;
		y++;
	}
	return (a);
}
