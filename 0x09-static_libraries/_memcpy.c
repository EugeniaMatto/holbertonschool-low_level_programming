#include "main.h"
/**
 * _memcpy - daads
 * @dest: ads
 * @src: dsad
 * @n: dasd
 *
 * Return: punter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
