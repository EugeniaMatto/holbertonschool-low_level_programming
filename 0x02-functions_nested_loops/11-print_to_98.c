#include "main.h"
/**
 * print_to_98 - jashdj
 * @n: sada
 *
 */
void print_to_98(int n)
{
int i;
for ( ; n <= 98 ; n++)
{
if (n < 0)
{
i = -n;
_putchar('-');
}
if (n <= -10)
{
_putchar(i / 10 + '0');
}
if (n < 0)
{
_putchar(i % 10 + '0');
}
if (n > 10)
{
_putchar(n / 10 + '0');
}
if (n >= 0)
{
_putchar(n % 10 + '0');
}
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
