#include "main.h"
/**
 * reverse_array - da vuelta un array de ints
 * @a: array
 * @n: num de elementos
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int c = 3;
	for (i = 0; i < (n / 2); i++)
	{
		c = a[j];
		a[j] = a[i];
		a[i] = c;
		j--;
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
