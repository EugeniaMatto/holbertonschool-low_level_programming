#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print all arguments
 * @separator: args ,
 * @n: cant de args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x = 0;
	va_list lista;

	if (n <= 0)
		return;

	va_start(lista, n);
	for (x = 0; x < n; x++)
	{
		i = va_arg(lista, int);

		printf("%d", i);

		if ((x != n - 1)&&(separator))
			printf("%s", separator);
	}
	va_end(lista);
	printf("\n");
}
