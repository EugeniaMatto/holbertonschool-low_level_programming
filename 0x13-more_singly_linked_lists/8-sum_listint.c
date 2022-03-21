#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: head
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *aux;

	aux = head;
	while (aux != NULL)
	{
		i += aux->n;
		aux = aux->next;
	}

	return (i);
}
