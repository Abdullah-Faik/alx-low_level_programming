#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialization of struct dog
 * @d: pointer to dog
 * @name: the name
 * @age: the age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
