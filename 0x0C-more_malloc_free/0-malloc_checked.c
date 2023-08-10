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
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
}
