#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: contains information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
