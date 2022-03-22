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
	listint_t *aux, *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	aux = *head;
	while (idx > i)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
		i++;
	}

	new->next = aux->next;
	aux->next = new;
	return (new);
}
