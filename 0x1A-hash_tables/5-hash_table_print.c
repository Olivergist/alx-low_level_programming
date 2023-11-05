#include "hash_tables.h"

/**
  * hash_table_print - prints hash table.
  * @ht: hash table
  *
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int printed = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (printed == 0)
					printed = 1;
				else
					printf(", ");

				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
		printf("}\n");
	}
}
