#include "main.h"
int _funcionAux(int n, int num);
/**
 * _sqrt_recursion - x elevado a y
 * @n: num
 * Return: num que multiplicado por si mismo da n
 */
int _sqrt_recursion(int n)
{
return (_funcionAux(n, (n/2)));
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
	return (-1);
if (num * num != n)
{
	if (num > 10000)
		num = num - 1000;
	return (_funcionAux(n, (num - 1)));
}
else
{
	return (num);
}
}
