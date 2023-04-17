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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);

}
