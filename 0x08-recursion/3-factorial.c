#include "main.h"
/**
 * factorial - put en recursion
 * @n: num
 * Return: largo de la cadena
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
