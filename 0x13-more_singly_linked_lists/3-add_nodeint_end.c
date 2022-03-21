#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end
 * @head: head
 * @n: content of node
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *new;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
		return (NULL);

	aux->n = n;

	if (*head == NULL)
	{
		*head = aux;
		aux->next = NULL;
	}

	new = *head;
	while (new->next != NULL)
	{
		new = new->next;
	}

	new->next = aux;
	aux->next = NULL;
	return (aux);
}
