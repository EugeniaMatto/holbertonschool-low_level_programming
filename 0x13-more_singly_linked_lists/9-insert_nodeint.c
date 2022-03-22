#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head
 * @idx: index
 * @n: n del nuevo nodo
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 1;
	listint_t *aux, *new, *ne;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	aux = *head;
	while (aux != NULL && idx > i)
	{
		aux = aux->next;
		i++;
	}

	if (aux != NULL && idx > 0)
	{
		ne = aux->next;
		aux->next = new;
		new->next = ne;
		return (new);
	}

	if (idx == 0)
	{
		new->next = aux;
		*head = new;
	}

	return (NULL);
}
