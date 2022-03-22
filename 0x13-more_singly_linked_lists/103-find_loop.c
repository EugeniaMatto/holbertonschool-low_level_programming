#include "lists.h"
listint_t *find_listint_loop(listint_t *head);
/**
 * find_listint_loop -  function that finds the loop in a linked list.
 * @head: head
 * Return: The address of the node loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *aux, *aux2;

	if (head == NULL)
		return (NULL);

	aux = head;
	while (aux != NULL)
	{
		if (aux->next == (head))
			return (aux);

		aux2 = head;
		while (aux2 != NULL)
		{
			if ((aux->next == aux2->next) && (aux != aux2))
				return (aux);

			aux2 = aux2->next;
		}
		aux = aux->next;
	}
	return (NULL);
}
