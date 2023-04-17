#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize members of dog
 * @d: pointer to struct dog to modify members of
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		return;
	}
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
	strcpy(d->owner, owner);

	d->age = age;
}

