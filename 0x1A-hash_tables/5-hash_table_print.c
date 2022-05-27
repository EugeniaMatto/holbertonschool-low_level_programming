#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, z = 0;
	hash_node_t *aux;

	printf("{");
	for (; ht && i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (z == 1)
				printf(", ");
			z = 1;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	for (; ht && i < ht->size; i++)
	{
		if (ht->array[i])
		{
			aux = ht->array[i]->next;
			while (aux)
			{
				printf(", '%s': '%s'", aux->key, aux->value);
				aux = aux->next;
			}
		}
	}
	printf("}\n");
}
