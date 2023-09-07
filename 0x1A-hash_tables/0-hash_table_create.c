#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, the function should return NULL
 * Description: the function should return NULL if size is set to 0
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *taple = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (taple == NULL)
	{
		return (NULL);
	}

	taple->size = size;
	taple->array = malloc(sizeof(hash_node_t *) * size);

	if (taple->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		taple->array[i] = NULL;
	}
	return (taple);
}
