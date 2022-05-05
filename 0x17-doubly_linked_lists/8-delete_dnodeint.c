#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete a node at the index
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *sig;
	unsigned int i = 0;

	if (!head || !(*head) || (index != 0 && !(*head)->next))
		return (-1);
	aux = *head;
	if (index == 0)
	{
		sig = aux->next;
		if (sig)
			sig->prev = NULL;
		*head = sig;
		free(aux);
		return (1);
	}
	while (aux && i < (index - 1))
	{
		aux = aux->next;
		i++;
	}
	if (!aux)
		return (-1);

	sig = aux->next->next;
	free(aux->next);
	aux->next = sig;
	sig->prev = aux;
	return (1);
}
