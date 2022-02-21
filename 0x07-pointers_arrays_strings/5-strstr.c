#include "main.h"
/**
 * _strstr - daads
 * @haystack: ads
 * @needle: ad
 *
 * Return: punter
 */
char *_strstr(char *haystack, char *needle)
{
int x, i, z = 0;

for (i = 0; haystack[i] != '\0'; i++)
{
	if (needle[0] == haystack[i])
	{
	x = 1;
		while (needle[x] != '\0')
		{
			if (needle[x] == haystack[i + x])
			{
			z = 1;
			}
			else
			{
			z = 0;
			break;
			}
		x++;
		}
	if (z == 1)
	return (haystack + i);
	}
}
if (*needle == '\0')
return (haystack);
return ('\0');
}
