#include "main.h"
/**
 * strtow - corta strings en palabras
 * @str: string a cortar en palabras
 * Return: puntero a palabras cortadas
 */
char **strtow(char *str)
{
char **p;
int s, x, b, i, c, cont = 0;

if (str == NULL || *str == '\0')
return (NULL);

while (str[i])
{
if (str[i] == ' ')
cont++;
i++;
}

p = malloc(sizeof(char *) * (cont + 1));
if (p == NULL)
	return (NULL);

b = 0;
c = 0;
for (i = 0; i < cont && str[b] != '\0'; i++)
{
	c = 0;
		while (str[b] != ' ')
		{
		c++;
		b++;
		}
	b++;
	p[i] = malloc((c + 1) * sizeof(char));
		if (p[i] == NULL)
			return (NULL);
}
s = 0;
x = 0;
for (i = 0; i < b; i++)
{	
if (str[i] == ' ')
{
s++;
x = 0;
}
else
{
p[s][x] = str[i];
x++;
}
}
p[c] = '\0';

return (p);
}
