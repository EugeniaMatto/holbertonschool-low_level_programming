#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return number of nodes
 * @h: head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
