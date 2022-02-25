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
while
((*s != '\0') && (*s != c))
{
s++;
}
if (*s == '\0' && c != '\0')
return ('\0');
return (s);
}
