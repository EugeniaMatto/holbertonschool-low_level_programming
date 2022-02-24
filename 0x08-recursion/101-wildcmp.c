#include "main.h"
int is_Aux(char *s, char *ult);
/**
 * wildcmp - *
 * @s1: cadena1
 * @s2: cadena2
 * Return: 1 si son iguales, 0 si no
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2 && *s1 != '*')
return (wildcmp((s1 + 1), (s2 + 1)));

if ((*s1 == '*' && *(s2 + 1) == '\0') || (*s2 == '*' && *(s2 + 1) == '\0'))
return (1);

if (*s1 == '*')
return (wildcmp((s1 + 1), s2));

if (*s2 == '*')
return (wildcmp((s2 + 1), s1));

return (0);
}
/**
 * is_Aux - aux
 * @s: cadena
 * @ult: ultima letra
 * Return: 1 o 0
 */
int is_Aux(char *s, char *ult)
{
if (*s == '\0')
return (1);
if (*s != *ult)
return (0);
return (is_Aux((s + 1), (ult - 1)));
}
