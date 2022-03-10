#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print all strings
 * @format: args
 * 
 */
void print_all(const char * const format, ...)
{
	int b, i = 0;
	va_list lista;

	op_t ops[] = {
		{"c", "char"},
		{"i", "int"},
		{"f", "float"},
		{"s", "char *"},
		{NULL, NULL}};

	while (format[i])
		i++;

	va_start(lista, i);

	i = 0;
	while (format[i])
	{
		if (!(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's'))
		{
			i++;
			continue;
		}

		b = 0;
		while (b < 4)
		{
			if (ops[b].op[0] == format[i])
			{
				break;
			}
			b++;
		}

	printf("asdi, ");
	i++;
	}
	va_end(lista);
	printf("\n");	
}
