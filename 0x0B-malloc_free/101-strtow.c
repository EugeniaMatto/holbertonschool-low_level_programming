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

p = malloc(sizeof(char *) * spaces);
if (p == NULL)
	return (NULL);
c = 0;
for (i = 0; i < spaces; i++)
{
	if (str[c] == ' ' && str[c + 1] != ' ' && str[c + 1] != '\0')
	{
	c++;
		while (str[c] != '\0' || str[c] != ' ')
		{
		letras++;
		c++;
		}
	p[i] = malloc(sizeof(char) * letras);	
	}
	else
	{
	c++;
	}
}
c = 0;
letras = 0;
for (i = 0; i < spaces; i++)
{
letras = 0;
if (str[c] == ' ' && str[c + 1] != ' ' && str[c + 1] != '\0')
{
	c++;
	while(str[c] != '\0' && str[c] != ' ')
	{
	p[i][letras] = str[c];
	letras++;
	c++;
	}
}
}
return (p);
}
