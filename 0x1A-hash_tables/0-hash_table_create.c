#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size) {
	hash_table_t *ht;
	unsigned long int i;

	/* Create a table of size 'size' */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL || size == 0)
		return (NULL);

	/* Create an array of size 'size' for the hash table */
	ht->array = malloc(sizeof(void *) * size);
	if (ht->array == NULL) {
		free(ht);
		return (NULL);
	}

	ht->size = size;

	/* Initialize the array with NULL */
	for (i = 0; i < size; i++) {
		ht->array[i] = NULL;
	}

	return (ht);
}
