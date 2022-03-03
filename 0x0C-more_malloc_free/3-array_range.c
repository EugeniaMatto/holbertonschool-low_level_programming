#include "main.h"
/**
 * array_range - crea un array de ints
 * @min: num inicial
 * @max: num final
 * Return: puntero a posicion 0 0
 */
int *array_range(int min, int max)
{
	int i, b;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * (sizeof(int)));

	if (p == NULL)
		return (NULL);

	b = 0;
	for (i = min; i <= max; i++)
	{
		p[b] = i;
		b++;
	}
	return (p);
}
