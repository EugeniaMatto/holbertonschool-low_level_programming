#include "main.h"
/**
 * argstostr - concatena argumentos
 * @ac: largo de argumentos
 * @av: args
 * Return: puntero a cadenas concatenadas
 */
char *argstostr(int ac, char **av)
{
char *p;
int b, i, c, cont = 0;

if (av == NULL || ac == 0)
	return (NULL);

cont = 0;
for (i = 0; i < ac; i++)
{
b = 0;
while (av[i][b] != '\0')
{
b++;
cont++;
}
}

cont++;

p = malloc(sizeof(char) * cont);

b = 0;
c = 0;
for (i = 0; i < ac; i++)
{
	b = 0;
	while (av[i][b] != '\0')
	{
	p[c] = av[i][b];
	c++;
	b++;
	}
	p[c] = '\n';
	c++;
}
return (p);
}
