#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * Description: dog
 * @name: char
 * @age: float
 * @owner: char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);