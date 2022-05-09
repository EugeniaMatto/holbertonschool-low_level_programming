#include "main.h"
int _strlen(char *s);
/**
 * _strncpy - concaten string
 * @dest: primer string
 * @src: segundo string
 * @n: num
 * Return: concat
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, x = 0;
	
	for (i = 0; i <= n - 1; i++)
	{
		if (src[i] == '\0')
			x = 1;
	if (x == 0)
		dest[i] = src[i];
	else
		dest[i] = '\0';
	}
	
	return (dest);
}
