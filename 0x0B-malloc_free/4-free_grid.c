#include "main.h"
/**
 * free_grid - libera una matriz de enteros
 * @grid: ancho
 * @height: alto
 * Return: puntero a matriz (array 2d)
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
        free(grid[i]);
free(grid);
}
