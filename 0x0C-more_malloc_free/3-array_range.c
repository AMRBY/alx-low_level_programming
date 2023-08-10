#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range  - find uppercase
 * Description: find uppercase
 * @min : arg
 * @max : arg
 * Return: a
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
	{
		a[j++] = i;
	}
	return (a);
}
