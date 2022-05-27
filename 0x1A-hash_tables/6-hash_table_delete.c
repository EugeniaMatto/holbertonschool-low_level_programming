#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *a, *t;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			a = ht->array[i];
			while (a)
			{
				t = a->next;
				free(a->key);
				free(a->value);
				free(a);
				a = t;
			}
		}
		free(ht->array);
		free(ht);
	}
}
