#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list_int
 * @head: head
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
