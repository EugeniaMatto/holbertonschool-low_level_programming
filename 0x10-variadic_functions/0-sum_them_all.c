#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all arguments
 * @n: args (int)
 * Return: suma
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0;
	int i = 0;
	va_list lista;

	if (n == 0)
		return (0);

	va_start(lista, n);

	for (x = 0; x < n; x++)
		i += va_arg(lista, int);

	va_end (lista);
	return (i);
}
