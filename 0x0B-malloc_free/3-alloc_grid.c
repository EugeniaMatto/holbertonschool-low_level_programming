#include "main.h"
/**
 * alloc_grid - aloja una matriz de enteros
 * @width: ancho
 * @height: alto
 * Return: puntero a matriz (array 2d)
 */
int **alloc_grid(int width, int height)
{
int **p;
int i, b = 0;

p = malloc(sizeof(int) * (width * height));

if (width < 1 || height < 1 || p == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	for (b = 0; b < width; b++)
	{
	*(*(p + i) + b) = 0;
	}
}

return (p);
}
