#include "main.h"
int _strlen(char *s);
/**
 * _strncpy - concaten string
 * @s1: primer string
 * @s2: segundo string
 * Return: 0, 1 o 2
 */
int _strcmp(char *s1, char *s2)
{
	if (_strlen(s1) > _strlen(s2))
	{
		return (15);
	}
	else if (_strlen(s2) > _strlen(s1))
	{
		return (-15);
	}
        else
	{
		return(0);
	}
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
