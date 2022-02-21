#include "main.h"
/**
 * _strpbrk - daads
 * @s: ads
 * @accept: ad
 *
 * Return: punter
 */
char *_strpbrk(char *s, char *accept)
{
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
			break;
		z = 0;
	}
	return (s + i + 1);
}
