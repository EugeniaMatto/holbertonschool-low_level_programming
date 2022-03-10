#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print all strings
 * @format: args
 *
 */
void print_all(const char * const format, ...)
{
	int b, i;
	va_list lista;
	char *juan = "";

	op_t ops[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(lista, format);
	i = 0;
	while (format[i] != '\0')
	{
		b = 0;
		while (ops[b].op != NULL)
		{
			if (ops[b].op[0] == format[i])
			{
				printf("%s", juan);
				ops[b].f(lista);
				juan = ", ";
			}
			b++;
		}
		i++;
	}
	printf("\n");
	va_end(lista);
}
/**
 * print_char - prints out a char
 * @args: char to print
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints out an integer
 * @args: int to print
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - prints out a float
 * @args: char to print
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints out a string
 * @args: string to print
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
