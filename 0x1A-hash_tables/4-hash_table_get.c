#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in hash table.
 * @ht: The hash table to search in.
 * @key: The key string.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
