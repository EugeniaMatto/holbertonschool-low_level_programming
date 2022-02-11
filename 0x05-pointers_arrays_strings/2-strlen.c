#include "main.h"
/**
 * _strlen - retorna el largo
 * @s: char
 * Return: largo
 */
int _strlen(char *s)
{
int cont = 0;
char l = '0';
while (l != '\0')
{
cont++;
l = *(s + cont);
}
return (cont);
}
