#include "main.h"
/**
 * print_rev - ad
 * @s: string
 */
void print_rev(char *s)
{
int i, cont = 0;
char l = '0';
if (!(*s == '\0'))
{
while (l != '\0')
{
	cont++;
	l = *(s + cont);
}

for (i = cont - 1 ; i >= 0; i--)
{
_putchar(*(s + i));
}
}
_putchar('\n');
}
