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

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	while (str)
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
