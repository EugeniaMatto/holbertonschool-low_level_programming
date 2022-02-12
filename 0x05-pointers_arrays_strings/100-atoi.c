#include "main.h"
/**
 * _atoi - ad
 * @s: destino
 * Return: xd
 */
int _atoi(char *s)
{
int largo = _strlen(s);
int b = 0;
int res = 0;
int veces = 1;
for (b = largo - 1 ; b >= 0; b--)
{
if ((s[b] >= 48) && (s[b] <= 57))
{
res += ((s[b] - '0') * veces);
veces = veces * 10;
if (s[(b - 1)] == 45)
res = -res;
}
}
return (res);
}
/**
 * _strlen - ada
 * @s: das
 * Return: 0
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
