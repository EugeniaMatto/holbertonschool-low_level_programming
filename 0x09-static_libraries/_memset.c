#include "main.h"
/**
 * _memset - daads
 * @s: ads
 * @b: dsad
 * @n: dasd
 *
 * Return: punter
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
