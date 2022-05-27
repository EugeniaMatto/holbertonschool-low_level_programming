#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *aux;

	for (; ht && i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			if (strcmp(aux->key, key) == 0)
				return (aux->value);
			aux = aux->next;
		}
	}
	return (NULL);
}
