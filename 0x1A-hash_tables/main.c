#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht = NULL;
    unsigned int i, j;
    hash_node_t *aux;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "heliotropes", "valueHELI");
    hash_table_set(ht, "neurospora", "valueNEURO");
    hash_table_set(ht, "hetairas", "valueHETA");
    hash_table_set(ht, "mentioner", "valueMENTIONE");
     hash_table_set(ht, "stylist", "valueSTYLIST");
      hash_table_set(ht, "subgenera", "valueSUBGENETA");
    hash_table_set(ht, "betty", "newvalueBETTY");

    printf("ok\n\n");
    for (i = 0; i < ht->size; i++)
    {
	    if (ht->array[i] != NULL)
	    {
		j = 0;
		aux = ht->array[i];
		while(aux)
		{
   	 		printf("- key: %s - value: %s - idx: %u -nodo: %u- \n", ht->array[i]->key, ht->array[i]->value, i, j);
			j++;
			aux = aux->next;
		}
	    }
    }

    return (EXIT_SUCCESS);
}
