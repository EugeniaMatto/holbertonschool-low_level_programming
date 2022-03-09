#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"

/**
 * get_op_func - funcion para obtener que operacion usar
 * @s: operador
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
		int i;

		i = 0;
		if (s[0] == '\\')
			s[0] = '0';

		while (i < 5)
		{
			if (ops[i].op[0] == s[0])
			{
				return (ops[i].f);
			}
			i++;
		}

	printf("Error\n");
	exit(99);
	return (NULL);
}
