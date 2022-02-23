#include "main.h"
#include "stdio.h"
/**
 * is_prime_number - x elevado a y
 * @n: num
 *
 * Return: pow
 */
int is_prime_number(int n)
{
int aux = 0;
int *p;
if (n <= 1)
{
*p = 0;
return (0);
}
if (n == 2)
{
*p = 0;
return (1);
}
if (*p == 0)
{
p = &aux;
*p = n;
printf("%d acacc \n " , *p);
}
if (*p % (n - 1) == 0)
return (0);

return (is_prime_number(n - 1));
}
