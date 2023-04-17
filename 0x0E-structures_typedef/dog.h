#ifndef _my_dog_h
#define _my_dog_h
/**
 * struct dog - struct dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Description: struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog;
#endif
