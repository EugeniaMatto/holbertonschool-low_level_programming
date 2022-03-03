#include "main.h"
/**
 * string_nconcat - asda
 * @s1: s1
 * @s2: s2
 * @n: n bytes de s2 concatenados a s1
 * Return: puntero  a s1 + n bytes de s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, i, b, c = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
i = 0;
b = 0;
while (s1[i] != '\0')
i++;

while (s2[b] != '\0')
b++;

if (b < n)
n = b;

p = malloc((1 + i + n)*(sizeof(char)));

if (p == NULL)
	return (NULL);

c = 0;
b = 0;
for (a = 0; a < (n + i); a++)
{
	if (s1[a] == '\0')
	b = 1;

	if (b == 0)
	p[a] = s1[a];

	if (b == 1)
	{
	p[a] = s2[c];
	c++;
	}
}
p[n + i] = '\0';
return (p);
}
