#include "main.h"
/**
 * _puts_recursion - put en recursion
 * @s: cadena
 */
void _puts_recursion(char *s)
{

if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(*s + 1);
}
