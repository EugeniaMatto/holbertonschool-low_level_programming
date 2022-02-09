#include <stdio.h>
/**
 * main - asd
 * Return: sad
 */
int main(void)
{
int i;
int x = 0;
for (i = 1; i <= 100; i++)
{
if (((i % 10) + (i / 10)) % 3 == 0)
{
printf("Fizz");
x = 1;
}
if ((i % 10 == 5) || (i % 10 == 0))
{
printf("Buzz");
x = 1;
}
if (x == 0)
printf("%d", i);
x = 0;
if (i != 100)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
