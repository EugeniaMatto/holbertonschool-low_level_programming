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
int i = 0;
while (s[i] != '\0')
{
	if (c == s[i])
	{
	return (s + i);
	}
i++;
}
return ('\0');
}
