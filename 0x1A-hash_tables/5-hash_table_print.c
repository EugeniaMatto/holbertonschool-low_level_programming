#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, z = 0;
	hash_node_t *aux;

	if (!ht)
		return;
	printf("{");
	for (; ht && i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (z == 1)
				printf(", ");
			z = 1;
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
		}
	}
	printf("}\n");
}
