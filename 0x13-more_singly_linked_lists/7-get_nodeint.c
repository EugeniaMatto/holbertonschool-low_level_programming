#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head
 * @index: index
 * Return: nodo en el index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i = 0;

	aux = head;
	while (aux != NULL && i < index)
	{
		aux = aux->next;
		i++;
	}

	if (aux != NULL)
		return (aux);
	else
		return (NULL);
}
