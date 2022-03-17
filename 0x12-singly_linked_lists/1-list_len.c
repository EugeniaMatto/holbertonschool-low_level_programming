#include "lists.h"
/**
 * print_list - prints the number of elements of a list_t
 * @h: first node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}

	return (i + 1);
}
