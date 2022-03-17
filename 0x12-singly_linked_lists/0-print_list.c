#include "lists.h"
/**
 * print_list - prints all elements of a list_t
 * @h: first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[%u] (nil)\n", h->len);
		i++;
		h = h->next;
	}

	if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[%u] (nil)\n", h->len);

	return (i + 1);
}
