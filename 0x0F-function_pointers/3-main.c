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
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((!(argv[2][0] == '+' || argv[2][0] == '-' ||
	argv[2][0] == '*' || argv[2][0] == '%' || argv[2][0] == '/') ||
			argv[2][0] == '\\') || (argv == NULL))
	{
	printf("Error\n");
	exit(99);
	}

	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
