#include "main.h"
/**
 * malloc_checked - asda
 * @b: u int
 * Return: puntero o exit 98
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

	if (p == NULL)
	exit(98);

return (p);
}
