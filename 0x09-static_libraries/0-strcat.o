#include "main.h"
int _strlen(char *s);
/**
 * _strcat - concaten string
 * @dest:  primer string
 * @src:  segundo string
 * Return: strings concatenadas
 */
char *_strcat(char *dest, char *src)
{
int i;
int a = _strlen(dest);
for (i = 0; i <= _strlen(src); i++)
{
dest[a + i] = src[i];
}
return (dest);
}
/**
 * _strlen - retorna el largo
 * @s: char
 * Return: largo
 */
int _strlen(char *s)
{
int cont = 0;
char l = '0';

if (*s == '\0')
return (0);
	while (l != '\0')
	{
		cont++;
		l = *(s + cont);
	}
	return (cont);
}
