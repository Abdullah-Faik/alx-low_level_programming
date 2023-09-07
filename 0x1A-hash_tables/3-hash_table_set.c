#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key to add to the hash table
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *node;

	if (ht == NULL || key == NULL ||
		ht->size == 0 || ht->array == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[indx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	return (create_node(ht, node, indx, key, value));
}
/**
 * create_node - creates a node
 * @ht: hash table to add or update the key/value to
 * @node: node to add to the hash table
 * @indx: index of the array
 * @key: key to add to the hash table
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int create_node(hash_table_t *ht, hash_node_t *node, unsigned long int indx,
				const char *key, const char *value)
{
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	if (ht->array[indx] != NULL)
		node->next = ht->array[indx];

	ht->array[indx] = node;
	return (1);
}
