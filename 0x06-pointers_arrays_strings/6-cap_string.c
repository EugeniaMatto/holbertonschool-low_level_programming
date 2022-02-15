#include "main.h"
int _strlen(char *s);
/**
 * cap_string - da vuelta un array de ints
 * @a: array
 * Return: char
 */
char *cap_string(char *a)
{
int i = 0;
        for (i = 0; i < _strlen(a); i++)
        {
                if (((a[i] >= 97)&&(a[i] <= 122))&&
		((a[(i-1)]==',')||
		(a[(i-1)]==';')||
		(a[(i-1)]=='.')||
		(a[(i-1)]=='!')||
		(a[(i-1)]=='\n')||
		(a[(i-1)]== 9)||
		(a[(i-1)]=='?')||
		(a[(i-1)]=='"')||
		(a[(i-1)]==' ')||
		(a[(i-1)]=='(')||
		(a[(i-1)]==')')||
		(a[(i-1)]=='{')||
		(a[(i-1)]=='}'))
		)
                {
                a[i] = a[i] - 32;
                }
		/* si el anterior del que estamos = a tab lo cambiamos por un espacio*/
		if(a[(i-1)] == 9)
			a[(i-1)] = ' ';
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
