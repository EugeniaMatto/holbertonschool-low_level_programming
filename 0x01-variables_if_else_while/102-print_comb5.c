#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int b;
for (i = 0 ; i <= 99; i++)
{
for (b = 0 ; b <= 99 ; b++)
{
if (i < b)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(b / 10 + '0');
putchar(b % 10 + '0');
if (!(i == 98 && b == 99))
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
