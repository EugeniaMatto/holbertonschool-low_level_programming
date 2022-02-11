#include <stdio.h>
#include "main.h"
/**
 * print_times_table - sada
 * @n: asdsa
 */
void print_times_table(int n)
{
int i;
int a;
int res;
for (i = 0 ; i <= n ; i++)
{
for (a = 0 ; a <= n ; a++)
{
res = i * a;
if (res >= 10 && a != 0)
{
_putchar(res / 10 + '0');
}
else if (res < 10 && a != 0)
{
_putchar(' ');
}
_putchar(res % 10 + '0');
if (a != n)
{
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
}
