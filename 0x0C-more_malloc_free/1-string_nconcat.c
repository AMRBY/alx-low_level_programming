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

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		m = j;
	a = malloc(sizeof(char) * i + sizeof(char) * m);
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
