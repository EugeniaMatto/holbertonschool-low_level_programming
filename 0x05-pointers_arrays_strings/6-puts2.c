#include "main.h"
/**
 * puts2 - ad
 * @s: string
 */
void puts2(char *s)
{
int largo = _strlen(s);
int i;
for (i = 0 ; i < largo; i++)
{
	if (i % 2 == 0)
	_putchar(*(s + i));
}
_putchar('\n');
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
