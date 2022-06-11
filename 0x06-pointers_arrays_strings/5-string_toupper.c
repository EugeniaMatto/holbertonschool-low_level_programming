#include "main.h"
int _strlen(char *s);
/**
 * string_toupper - da vuelta un array de ints
 * @a: array
 * Return: concat string
 */
char *string_toupper(char *a)
{
    int i = 0;

    for (i = 0; i < _strlen(a); i++)
    {
        if ((a[i] >= 97) && (a[i] <= 122))
        {
            a[i] = a[i] - 32;
        }
    }
    return (a);
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
