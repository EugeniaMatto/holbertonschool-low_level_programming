#include "main.h"
/**
 * _strcpy - ad
 * @dest: destino
 * @src : frase
 * Return: xd
 */
char *_strcpy(char *dest, char *src)
{
int largo = _strlen(src);
int b = 0;
char l;
*dest = ' ';
	for (b = 0 ; b <= largo; b++)
	{
		l = *(src + b);
		*(dest + b) = l;
	}
return (dest);
}
/**
 * _strlen - ada
 * @s: das
 * Return: 0
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
