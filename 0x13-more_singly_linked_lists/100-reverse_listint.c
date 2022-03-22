#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: head
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = (*head)->next, *aux2 = *head;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	if ((*head)->next->next->next == NULL) /* 3 elementos */
	{
		aux = (*head)->next->next; /* ultimo elem */
		aux2 = (*head)->next;
		aux->next = aux2;
		aux2->next = *head;
		(*head)->next = NULL;
		*head = aux;
		return (*head);
	}

	*head = (*head)->next;
	aux2->next = NULL;

	while ((*head)->next != NULL)
	{
		aux = (*head)->next;
		(*head)->next = aux2;
		aux2 = (*head);
		(*head) = aux;
	}

	(*head)->next = aux2;
	return (*head);
}
