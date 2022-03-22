#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *aux = *head, *sig;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		sig = (*head)->next;
		free(*head);
		*head = sig;
		return (1);
	}

	while (index > i)
	{
		aux = aux->next;
		if (aux == NULL)
			return (-1);
		i++;
	}
	if (aux->next == NULL)
		return (-1);

	sig = aux->next->next;
	free(aux->next);
	aux->next = sig;
	return (1);
}
