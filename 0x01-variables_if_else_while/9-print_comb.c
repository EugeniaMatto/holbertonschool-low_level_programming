#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 0;
do
{  
putchar(a%10 + '0');
putchar(',');
putchar(' ');
a++; 
}while (a < 10);
putchar('\n');
return (0);
}
