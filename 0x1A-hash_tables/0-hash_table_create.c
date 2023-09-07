#include "hash_tables.h"

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
