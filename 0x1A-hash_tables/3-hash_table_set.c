#include "hash_tables.h"
hash_node_t *new_node(hash_node_t *old);
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key. value must be duplicated. value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *a = NULL, *b = NULL;
	unsigned long int idx;

	if (!key || !ht)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	a = ht->array[idx];
	/* update key */
	while (a != NULL)
	{
		if (strcmp(a->key, key) == 0)
		{
			free(a->value);
			a->value = strdup(value);
			return (1);
		}
		a = a->next;
	}
	if (ht->array[idx])
		a = new_node(ht->array[idx]);
	b = malloc(sizeof(hash_node_t));
	if (!b)
		return (0);
	b->key = strdup(key);
	b->value = strdup(value);
	b->next = NULL;
	if (a)
		b->next = a;
	ht->array[idx] = b;

	return (1);
}

hash_node_t *new_node(hash_node_t *old)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!new)
		return (NULL);

	new->key = strdup(old->key);
	new->value = strdup(old->value);
	new->next = NULL;
	free(old->key);
	free(old->value);
	free(old);
	return (new);
}
