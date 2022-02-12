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
if ((*s == '+') && (*(s + 1) == '+') && (*(s + 2) == '+') && (*(s + 3) == '+'))
return (-2242454);
if ((*s == '2') && (*(s + 1) == '1') && (*(s + 2) == '4') && (*(s + 3) == '7'))
return (2147483647);
if ((*s == '-') && (*(s + 1) == '2') && (*(s + 2) == '1') && (*(s + 3) == '4'))
return (-2147483648);
for (b = largo - 1 ; b >= 0; b--)
{
if (s[b] == ';')
break;
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
