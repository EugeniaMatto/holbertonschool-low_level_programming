#include "main.h"
/**
 * print_number - sad
 * @n: sad
 */
void print_number(int n)
{
int a;
if (n != 0)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n >= 1000)
{
_putchar(n / 1000 + '0');
n = n - 1000;
if (n < 100)
_putchar('0');
}
if (n >= 100)
{
a = (n / 100) * 100;
_putchar(n / 100 + '0');
n = n - a;
}
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
else
{
_putchar('0');
}
}
