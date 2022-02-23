#include "main.h"
/**
 * _strlen_recursion - put en recursion
 * @s: cadena
 * Return: largo de la cadena
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + 1);
}
