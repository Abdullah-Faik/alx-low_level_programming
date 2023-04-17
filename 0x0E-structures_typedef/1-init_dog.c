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
	if (d != NULL)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}