#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat  - find uppercase
 * Description: find uppercase
 * @s1 : arg
 * @s2 : arg
 * @n : arg
 * Return: a
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i = 0;
	unsigned int j = 0;
	int z = 0;
	unsigned int y = 0;
	int m = 0;

	if (s1 != NULL)
		while (s1[i])
			i++;
	if (s2 != NULL)
		while (s2[j])
			j++;
	m = n;
	a = malloc(sizeof(char) * (i + m + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	while (z < i)
	{
		a[z] = s1[z];
		z++;
	}
	while (y < j && y < n)
	{
		a[z] = s2[y];
		z++;
		y++;
	}
	a[z] = '\0';
	return (a);
}
