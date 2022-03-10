#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all strings
 * @separator: args
 * @n: cant de args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list lista;
	char *arr = "";

	va_start(lista, n);
	for (x = 0; x < n; x++)
	{
		arr = va_arg(lista, char*);
		if (arr != NULL)
		{
			printf("%s", arr);
		}
		else
		{
			printf("(nil)");
		}

		if ((x != n - 1) && (separador != NULL))
			printf("%s", separator);
	}
	va_end(lista);
	printf("\n");
}
