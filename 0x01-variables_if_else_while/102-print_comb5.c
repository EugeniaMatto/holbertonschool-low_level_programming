#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;
int d;
for (a = 0 ; a <= 9; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
if ((a != b) && (a < b))
{
putchar(a % 10 + '0');
putchar(b % 10 + '0');
for (c = 0 ; c <= 9; c++)
{
for (d = 0 ; d <= 9 ; d++)
{
if ((c != d) && (c < d))
{
putchar(c % 10 + '0');
putchar(d % 10 + '0');
}
}
}
if (a != 9 && b != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
