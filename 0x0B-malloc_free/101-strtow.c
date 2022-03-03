#include "main.h"
/**
 * strtow - corta strings en palabras
 * @str: string a cortar en palabras
 * Return: puntero a palabras cortadas
 */
char **strtow(char *str)
{
char **p;
int i, c, letras, spaces = 0;

if (str == NULL || *str == '\0')
return (NULL);

i = 0;
spaces = 0;
while (str[i] != '\0')
{
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
	spaces++;

i++;
}

p = malloc(sizeof(char *) * (spaces + 2));
if (p == NULL)
	return (NULL);
c = 0;
for (i = 0; str[i] != '\0' && c < spaces; i++)
{
	if ((str[i] != ' ' && str[i] != '\0')||(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0'))
	{
	if (str[i] == ' ')
		i++;
	letras = 0;
		while (str[i] != '\0' && str[i] != ' ')
		{
		letras++;
		i++;
	}
	p[c] = malloc(sizeof(char) * (letras + 4));
	i = i - letras;
	letras = 0;
	while (str[i] != '\0' && str[i] != ' ' && c != spaces)
	{
		p[c][letras] = str[i];
		i++;
		letras++;
	}
	c++;
	}
}

return (p);
}
