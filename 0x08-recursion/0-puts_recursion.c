#include "main.h"
/**
 * _puts_recursion - put en recursion
 * @s: cadena
 */
void _puts_recursion(char *s)
{
char c = *s;
if (c == '\0')
{
_putchar('\n');
return;
}
_putchar(c);
_puts_recursion(s + 1);
}
