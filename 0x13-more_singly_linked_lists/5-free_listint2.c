#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list_int
 * @head: head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);
	}
}
