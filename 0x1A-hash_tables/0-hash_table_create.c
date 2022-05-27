#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: Returns a pointer to the newly created hash table or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(hash_table_t));
	if (!a)
		return (NULL);

	a->size = size;
	a->array = malloc(sizeof(hash_node_t *) * size);
	if (!(a->array))
	{
		free(a);
		return (NULL);
	}

	for (; i < size; i++)
		a->array[i] = NULL;

	return (a);
}
