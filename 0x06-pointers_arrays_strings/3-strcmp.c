#include "main.h"
int _strlen(char *s);
/**
 * _strcmp - concaten string
 * @s1: primer string
 * @s2: segundo string
 * Return: 0, 1 o 2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
if (s1[i] == s2[i])
{
return (0);
}
else
{
return (s1[i] - s2[i]);
}
}
