#include "main.h"
/**
 * _puts - ad
 * @str: ada
 */
void _puts(char *str)
{
int i, cont = 0;
char l = '0';
if (*str == '\0')
{
_putchar('\n');
}
else
{
while (l != '\0')
{
cont++;
l = *(str + cont);
}
for(i = 0; i < cont; i++)
{
l = *(str + i);
_putchar(l);
}
_putchar('\n');
}
}
