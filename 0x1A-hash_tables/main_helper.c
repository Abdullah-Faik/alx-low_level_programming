#include "hash_tables.h"

void free_table(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *tmp;
    hash_node_t *tmp2;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        tmp = ht->array[i];
        while (tmp != NULL)
        {
            tmp2 = tmp->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
            tmp = tmp2;
        }
    }
    free(ht->array);
    free(ht);
}