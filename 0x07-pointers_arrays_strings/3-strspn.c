#include "main.h"
int _strlen(char *s);
/**
 * _strspn - daads
 * @s: ads
 * @accept: ad
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int ret = 0;
int x, z, i = 0;
for (i = 0; s[i] != '\0'; i++)
{
	for (x = 0; accept[x] != '\0'; x++)
	{
		if (s[i] == accept[x])
		{
		z = 1;
		break;
		}
	}
if (z == 0)
{
break;
}
else
{
ret++;
}
z = 0;
}
return (ret);
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
