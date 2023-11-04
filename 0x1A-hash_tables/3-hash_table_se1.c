#include "hash_tables.h"

/**
 * set_pair - Mallocs a key/value pair to the hash table.
 * @key: The key, a string that cannot be empty.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: A pointer to the new node, or NULL on error.
 */

hash_node_t *set_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
		free(node);
		return (NULL);

	node->value = strdup(value);
	if (node->value == NULL)
		free(node->key);
		free(node);
		return (NULL);

	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - Adds an element to the hash table, handling collisions.
 * @ht: A pointer to the hash table.
 * @key: The key, a string that cannot be empty.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || ht == NULL)
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];
	hash_node_t *prev = NULL;

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
			return (1);

		free(node->value);
		node->value = strdup(value);

		if (node->value == NULL)
			return (0);

		return (1);
		}
		prev = node;
		node = node->next;
	}
	hash_node_t *new_node = set_pair(key, value);

	if (new_node == NULL)
		return (0);

	if (prev == NULL)
		ht->array[index] = new_node;

	else
		prev->next = new_node;

	return (1);
}
