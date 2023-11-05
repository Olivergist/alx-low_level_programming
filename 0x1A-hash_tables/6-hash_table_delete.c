#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table.
  * @ht: The hash table to be deleted.
  *
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *current2;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			current2 = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = current2;
		}
	}
	free(ht->array);
	free(ht);
}
