#include "main.h"
int _strlen(char *s);
/**
 * _strncat - concaten string
 * @dest: primer string
 * @src: segundo string
 * @n: num
 * Return: string concatenado
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a = _strlen(dest);
	
	for (i = 0; i <= n - 1; i++)
	{
		dest[a + i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
