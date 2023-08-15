#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - length of strings
 * Description: find digit
 * @d: char pointer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
