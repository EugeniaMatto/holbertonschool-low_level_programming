#include "main.h"
int _putchar(char c);
/**
 * rev_string - ad
 * @s: string
 */
void rev_string(char *s)
{
	int largo = _strlen(s);
	int b, i = 0;
	char string[] = "";
	i = largo - 1;
	for (b = 0 ; b < i; b++)
	{
		string[0] = s[i];
		s[i] = s[b];
	        s[b] = string[0];	
		i--;
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
