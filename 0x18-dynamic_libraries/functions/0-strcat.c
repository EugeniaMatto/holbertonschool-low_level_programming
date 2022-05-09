#include "main.h"

/**
 * *_strcat - check the code
 * @dest: dest
 * @src: sorce
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

char *start = dest;

while (*start != '\0')
	{
	start++;
	}
while (*src != '\0')
	{
	*start++ = *src++;
	}
*start = '\0';
return (dest);


}
