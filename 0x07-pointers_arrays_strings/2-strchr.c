#include "main.h"
/**
 * _strchr - daads
 * @s: ads
 * @c: ad
 *
 * Return: punter
 */
char *_strchr(char *s, char c)
{
while ((*s != '\0') && (*s != c))
{
s++;
}
return (s);
}
