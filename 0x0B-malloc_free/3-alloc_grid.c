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

if (width < 1 || height < 1)
	return (NULL);

p = (int**)malloc(sizeof(int*) * (width));
if (p == NULL)
{
	free(p);
	return (NULL);
}

for (i = 0; i < width; i++)
{
	p[i] = (int*)malloc(height * sizeof(int));
	if (p[i] == NULL)
	{
		b = 1;
	}
}

if (b == 1)
{
for (i = 0; i < width; i++)
	free(p[i]);
free(p);
}
b = 0;

for (i = 0; i < width; i++)
{
	for (b = 0; b < height; b++)
	{
	p[i][b] = 0;
	}
}

return (p);
}
