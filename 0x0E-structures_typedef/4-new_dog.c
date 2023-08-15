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
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
