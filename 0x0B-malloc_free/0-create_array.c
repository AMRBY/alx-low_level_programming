#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array  - find uppercase
 * Description: find uppercase
 * @c : arg
 * @size : arg
 * Return: a
 */

char *create_array(unsigned int size, char c)
{	
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	else 
	{
		a = malloc(sizeof(char) * size);
		while (i < size)
		{
			a[i] = c;
			i++;
		}
		return (a);
	}
}
