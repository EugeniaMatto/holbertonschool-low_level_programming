#include "main.h"
int is_Aux(char *s, char *ult);
/**
 * is_palindrome - es palindroma
 * @s: cadena
 * Return: 1 is palindrome 0 no
 */
int is_palindrome(char *s)
{
return (is_Aux(s, (s + _strlen_recursion(s) - 1)));
}
/**
 * is_Aux - aux
 * @s: cadena
 * @ult: ultima letra
 * Return: 1 o 0
 */
int is_Aux(char *s, char *ult)
{
if (*s == '\0')
return (1);
if (*s != *ult)
return (0);
return (is_Aux((s + 1), (ult - 1)));
}
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
