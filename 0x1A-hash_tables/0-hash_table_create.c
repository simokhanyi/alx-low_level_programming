#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with a given size.
 * @size: The size of the hash table (number of buckets).
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		fprintf(stderr, "Error: malloc failed for hash table structure\n");
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed for hash table array\n");
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	ht->array[i] = NULL;

	return (ht);
}
