#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	printf("%d\n", h->n);
	return (i);
}
