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
				ret++;
				break;
			}
		}
		
		if (z == 0)
			break;
		z = 0;
	}

	return (ret);
}
