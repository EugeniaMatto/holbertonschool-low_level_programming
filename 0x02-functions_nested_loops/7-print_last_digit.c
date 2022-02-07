#include "main.h"
/**
 * print_last_digit - ad
 * @c: num
 * Return: last digit
 */
int print_last_digit(int c)
{
int x;
if (c < 0)
{
c = -c;
}
if (c == INT_MIN)
{
c = 88;
}
x = c % 10;
_putchar(x % 10 + '0');
return (x);
}
