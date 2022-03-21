#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning
 * @head: head
 * @n: content of node
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *aux;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);

	aux->n = n;

	aux->next = *head;
	*head = aux;

	return (aux);
}
