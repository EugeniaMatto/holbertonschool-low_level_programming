#include "main.h"
/**
 * rot13 - codifica en rot13
 * @a: cadena a codificar
 * Return: caden en rot13
 */
char *rot13(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
while (((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'
)) && (a[i - 1] != '\\'))
{
if ((a[i] >= 'a' && a[i] <= 'm') || (a[i] >= 'A' && a[i] <= 'M'))
{
a[i] = a[i] + 13;
break;
}
else
{
a[i] = a[i] - 13;
break;
}
}
}
return (a);
}
