#include "main.h"
/**
 * strtow - corta strings en palabras
 * @str: string a cortar en palabras
 * Return: puntero a palabras cortadas
 */
char **strtow(char *str)
{
char **p;
int i, c, cont = 0;

if (str == NULL || *str == '\0')
return (NULL);

i = 0;
cont = 0;
while (str[i] != '\0')
{
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
	cont++;

i++;
}

p = malloc(sizeof(char *) * (cont));
if (p == NULL)
	return (NULL);
c = 0;
for (i = 0; i < cont; i++)
{
	
	printf("%d\n", c);
	p[i] = malloc(c * sizeof(char));
		if (p[i] == NULL)
			return (NULL);
}
return (p);
}
