#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: first node
 * @str: string a colocar en el nuevo nodo
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new;
	char *aux = (char *)str;

	new = malloc(sizeof(size_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(aux);
	while (str)
		i++;
	new->len = i;
	new->next = head[0];
	(head[0])->next = new;

	return (new);
}
