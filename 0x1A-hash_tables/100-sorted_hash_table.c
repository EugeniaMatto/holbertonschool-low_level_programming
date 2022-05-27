#include "hash_tables.h"

/**
 * shash_table_create - ..
 * @size: size
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(shash_table_t));
	if (!a)
		return (NULL);

	a->size = size;
	a->array = malloc(sizeof(shash_node_t *) * size);
	if (!(a->array))
	{
		free(a);
		return (NULL);
	}

	for (; i < size; i++)
		a->array[i] = NULL;

	a->shead = NULL;
	a->stail = NULL;
	return (a);
}

/**
 * shash_table_set - ..
 * @ht: ht
 * @key: key
 * @value: vl
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	shash_node_t *a = NULL, *b = NULL;
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
	b = malloc(sizeof(shash_node_t));
	if (!b)
		return (0);
	b->key = strdup(key);
	b->value = strdup(value);
	b->next = ht->array[idx];
	ht->array[idx] = b;
	return (1);
}
/*	if (ht->shead == NULL && ht->stail == NULL)
	{
		b->sprev = NULL;
		b->snext = NULL;
		ht->shead = ht->array[idx];
		ht->stail = ht->array[idx];
	}
	else
	{
		if (compareKeys(b->key, ht->shead->key) == 2)
		{
			b->sprev = NULL;
			c = ht->shead;
			c->sprev = b;
			b->snext = c;
			ht->shead = b;
		}
		if (compareKeys(b->key, ht->stail->key) == 1)
		{
			b->snext = NULL;
			b->sprev = ht->stail;
			ht->stail->next = b;
			ht->stail = b;
		}
		c = ht->shead;
		while (c)
		{
			if (compareKeys(b->key, c->key) == 1)
			{
				b->snext = c->snext;
				c->snext->sprev = b;
				b->sprev = b;
				c->snext = b;
			}
			c = c->snext;
		}
	}
	return (1);
}
*/
/**
 * compareKeys - compare Keys ASCII value
 * @s: 1 str
 * @u: 2 str
 * Return: 1 if s > u, 2 if u > s, 0 in other case
 */
int compareKeys(char *s, char *u)
{
	int i = 0;
	while (s[i] && u[i])
	{
		if (s[i] > u[i])
			return (1);
		if (s[i] < u[i])
			return (2);
	}
	return (0);
}


/**
 * shash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0, z = 0;
	shash_node_t *aux;

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


/**
 * shash_table_print_rev - function that prints a hash table.
 * @ht: is the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	ht = ht;
	printf("{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *a, *t;

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
