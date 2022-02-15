#include "main.h"
int _strlen(char *s);
/**
 * _strcar - concaten string
 * @dest: primer string
 * @src: segundo string
 * @n: num
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int a = _strlen(dest);
        for (i = 0; i <= n-1; i++)
        {
		dest[a + i] = src[i];
	       	if (src[i] == '\0')
		       break;
        }
        return(dest);
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
