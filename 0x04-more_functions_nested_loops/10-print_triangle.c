#include "main.h"
/**
 * print_triangle - asd
 * @size: dsa
 */
void print_triangle(int size)
{
int i, x;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (x = 1; x <= size - i; x++)
{
_putchar(' ');
}
for (x = 1; x <= i; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
