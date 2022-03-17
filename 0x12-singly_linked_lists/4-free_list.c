#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
	{
		free(head);
		return;
	}

	aux = head;
	while (aux->next != NULL)
	{
		free(aux->str);
		free(aux);
		aux = aux->next;
	}
	free(aux->str);
	free(aux);
}
