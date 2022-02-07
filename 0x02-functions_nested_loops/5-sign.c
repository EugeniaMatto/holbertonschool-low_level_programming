#include "main.h"
/**
 * print_sign - ad
 * @n: asda
 * Return: 1, 0 o -1
 */
int print_sign(int n)
{
if (n==0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
putchar('-');
return (-1);
}
}
