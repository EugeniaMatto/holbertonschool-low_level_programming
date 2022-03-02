#include "main.h"
/**
 * create_array - crea un array
 * @size: tamaño del array
 * @c: caracter con el que comienza
 * Return: cadena
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
p = malloc(sizeof(char) * size);

if (size == 0 || p == NULL)
	return ('\0');

for (i = 0; i < size; i++)
	p[i] = c;

return (p);
}
