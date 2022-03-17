#include "lists.h"
char *_strdup(char *str);
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
		return (NULL);

	new->str = _strdup((char *) str);

	while (str[i] != '\0')
		i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
/**
 * _strdup - crea un array
 * @str: tamaño del array
 * Return: cadena
 */
char *_strdup(char *str)
{
	char *p;
	int b, i;

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * i);

	if (p == NULL || str[0] == '\0')
		return ('\0');

	for (b = 0; b < i; b++)
		p[b] = str[b];

	return (p);
}
