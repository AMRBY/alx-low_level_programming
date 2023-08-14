#include "dog.h"
/**
 * init_dog - length of strings
 * Description: find digit
 * @d: char pointer
 * @name: char pointer
 * @owner: char pointer
 * @age: char pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else 
		return;
}


