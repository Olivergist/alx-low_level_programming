#include "hash_tables.h"

/**
  * hash_table_get - get a value associated with the key.
  * @ht: look into hash table.
  * @key: look for key.
  *
  * Return: value or Null if not found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
