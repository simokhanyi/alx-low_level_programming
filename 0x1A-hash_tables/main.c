#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success, EXIT_FAILURE on failure
 */

int main(void)
{
	hash_table_t *ht = hash_table_create(1024);

	if (ht == NULL)
	{
		fprintf(stderr, "Failed to create the hash table\n");
		return (EXIT_FAILURE);
	}

	hash_table_set(ht, "name", "John");
	hash_table_set(ht, "age", "30");
	hash_table_set(ht, "city", "New York");

	printf("Name: %s\n", hash_table_get(ht, "name"));
	printf("Age: %s\n", hash_table_get(ht, "age"));
	printf("City: %s\n", hash_table_get(ht, "city"));

	printf("Hash Table contents:\n");
	hash_table_print(ht);

	hash_table_delete(ht);

	return (EXIT_SUCCESS);
}
