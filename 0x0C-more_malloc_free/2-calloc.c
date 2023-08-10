#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc  - find uppercase
 * Description: find uppercase
 * @nmemb : arg
 * @size : arg
 * Return: a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int z = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	b = a;
	while (z < nmemb * size)
	{
		b[z] = '\0';
		z++;
	}
	return (a);
}
