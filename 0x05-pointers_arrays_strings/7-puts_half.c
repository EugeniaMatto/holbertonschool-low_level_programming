#include "main.h"
/**
 * puts_half - ad
 * @s: string
 */
void puts_half(char *str)
{
int largo = _strlen(str);
int i = 0;
if (largo % 2 == 0)
{
for (i = largo / 2; i < largo; i++)
	{
	_putchar(*(str + i));
	}
}
else
{
i = (largo -1) / 2;
for (; i < largo; i++)
{
 _putchar(*(str + i));
}
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
