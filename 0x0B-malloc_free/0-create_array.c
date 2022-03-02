#include "main.h"
/**
 * create_array - crea un array
 * @size: tamaño del array
 * @c: caracter con el que comienza
 * Return: cadena
 */
char *create_array(unsigned int size, char c)
{
char *p;
if (size == 0)
	return ('\0');
p = malloc(sizeof(char) * size);
p[0] = c;

return (p);
}
