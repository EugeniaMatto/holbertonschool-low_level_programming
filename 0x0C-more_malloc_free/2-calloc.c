#include "main.h"
/**
 * alloc_grid - aloja una matriz de enteros
 * @width: ancho
 * @height: alto
 * Return: puntero a matriz (array 2d)
 */
void **alloc_grid(int width, int height)
{
void **p;
int i, b = 0;

if (width < 1 || height < 1)
	return (NULL);

p = malloc(sizeof(void *) * height);
if (p == NULL)
{
	free(p);
	return (NULL);
}

for (i = 0; i < height; i++)
{
	p[i] = malloc(width);
	if (p[i] == NULL)
	{
		b = 1;
	}
}

if (b == 1)
{
for (i = 0; i < height; i++)
	free(p[i]);
free(p);
}
b = 0;

for (i = 0; i < height; i++)
{
	for (b = 0; b < width; b++)
	{
	p[i][b] = '\0';
	}
}

return (p);
}
/**
 * _calloc - ubica matriz e inicializa en 0
 * @nmemb - height
 * @size - width
 * Return: puntero a posicion 0 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **p;
	if (nmemb == 0 || size == 0)
		return (NULL);

	p = alloc_grid(nmemb, size);
	
	if (p == NULL)
		return (NULL);

	return(p[0]);
}
