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
int ret;
        for (b = 0 ; b < largo; b++)
        {
		if ((s[b] >= 48) && (s[b] <= 57))
		ret = s[b] - '0';	
        }
return (ret);
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
