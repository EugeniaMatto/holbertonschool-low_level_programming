#include "main.h"
/**
 * leet - codifica
 * @a: cadena a codificar
 * Return: cadena codificada
 */
char *leet(char *a)
{
int i, x = 0;
char letras[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numeros[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	while (a[i] != '\0')
	{
		for (x = 0; x < 10; x++)
		{
		if (a[i] == letras[x])
			a[i] = numeros[x];
		}
	i++;
	}
	return (a);
}
