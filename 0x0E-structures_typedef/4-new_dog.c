#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - length of strings
 * Description: find digit
 * @name: char pointer
 * @age: char pointer
 * @owner: char pointer
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(struct dog));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
