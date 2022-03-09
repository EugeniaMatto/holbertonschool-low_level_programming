#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: num args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = 99, b = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!(argv[2][0] == '+' || argv[2][0] == '-' ||
	argv[2][0] == '*' || argv[2][0] == '%' || argv[2][0] == '/') ||
			argv[2][0] == '\\')
	{
	printf("Error\n");
	exit(99);
	}

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(a, b));

	return (0);
}
