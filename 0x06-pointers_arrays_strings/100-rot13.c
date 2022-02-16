#include "main.h"
/**
 * rot13 - codifica en rot13
 * @a: cadena a codificar
 * Return: caden en rot13
 */
char *rot13(char *a)
{
int i;
char c;
for (i = 0; a[i] != '\0'; i++)
{
c = a[i];
while ((a[i] >= 'n' && a[i] <= 'z') || (a[i] >= 'N' && a[i] <= 'Z'))
{
a[i] = a[i] - 13;
break;
}
if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
a[i] = c + 13;
}
return (a);
}
