#include "main.h"
/**
 * print_square - as
 * @size: ada
 */
void print_square(int size)
{
int i;
int b;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (b = 0; b < size; b++)
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
