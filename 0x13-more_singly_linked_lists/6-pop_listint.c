#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head
 * Return: he head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *aux;

	if (head == NULL)
		return (0);

	i = (int) (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (i);
}
