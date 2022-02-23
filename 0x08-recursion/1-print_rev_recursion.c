#include "main.h"
/**
 * _print_rev_recursion - put en recursion
 * @s: cadena
 */
void _print_rev_recursion(char *s)
{
char c = *s;
if (c == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(c);
}
