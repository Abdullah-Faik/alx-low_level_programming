#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int indx;

	if (key == NULL || size == 0)
		return (0);

	indx = hash_djb2(key);
	indx = indx % size;

	return (indx);
}
