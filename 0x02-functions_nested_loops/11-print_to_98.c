#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - jashdj
 * @n: sada
 *
 */
void print_to_98(int n)
{
if (n == 98)
printf("98");
if (n < 98)
{
for (; n <= 98; n++)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
}
}
if (n > 98)
{
for (; n >= 98; n--)
{
printf("%i", n);
if (n != 98)
{
printf(", ");
}
}
}
printf("\n");
}
