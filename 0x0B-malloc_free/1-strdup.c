#include "main.h"
/**
 * _strdup - crea un array
 * @str: tamaño del array
 * Return: cadena
 */
char *_strdup(char *str)
{
char *p;
int b, i;

if (str == NULL)
	return ('\0');

i = 0;
while (str[i] != '\0')
	i++;

i++;
p = malloc(sizeof(char) * i);

if (p == NULL)
	return ('\0');

for (b = 0; b < i; b++)
	p[b] = str[b];

return (p);
}
