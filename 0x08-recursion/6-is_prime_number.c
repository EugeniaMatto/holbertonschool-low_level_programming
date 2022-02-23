#include "main.h"
int _funcionAux(int n, int num);
/**
 * is_prime_number - x elevado a y
 * @n: num
 *
 * Return: pow
 */
int is_prime_number(int n)
{
return (_funcionAux(n, (n - 1)));
}
/**
 * _funcionAux - x elevado a y
 * @n: num
 * @num: dasd
 * Return: pow
 */
int _funcionAux(int n, int num)
{
if (num <= 1)
return (0);
if (n % num == 0)
return (0);
if (num == 2)
return (1);
return (_funcionAux(n, (num - 1)));
}
