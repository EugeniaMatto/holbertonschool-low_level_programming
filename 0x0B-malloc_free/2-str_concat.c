#include "main.h"
/**
 * str_concat - concatena strings
 * @s1: string 1
 * @s2: string 2
 * Return: puntero a cadenas concatenadas
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int b, i, c, a = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
i = 0;
while (s1[i] != '\0')
	i++;
b = 0;
while (s2[b] != '\0')
{
	i++;
	b++;
}
i++;
p = malloc(sizeof(char) * i);
if (p == NULL)
	return ('\0');
a = 0;
b = 0;
for (c = 0; c < i; c++)
{
	if (s1[c] == '\0')
		a = 1;
	if (a == 0)
	p[c] = s1[c];
	if (a == 1)
	{
		p[c] = s2[b];
		b++;
	}
}
return (p);
}
