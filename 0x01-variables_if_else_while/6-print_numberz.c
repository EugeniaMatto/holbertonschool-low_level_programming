#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a == 0)
{
putchar('0');
}
else
{
putchar(a % 10);
}
}
putchar('\n');
return (0);
}
