#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - length of strings
 * Description: find digit
 * @d: char pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
		if (d->name == "NULL")
			d->name = "nil";
		if (! (d->age))
			d->age = 0;
		if (d->owner == "NULL")
			d->owner = "nil";

//d = malloc(sizeof(struct dog));
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	//d->name = name;
	//d->age = age;
	//d->owner = owner;
}
