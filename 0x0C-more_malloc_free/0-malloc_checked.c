#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked  - find uppercase
 * Description: find uppercase
 * @b : arg
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
