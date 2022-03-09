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
	int a = 0, b = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(a, b));

	return (0);
}
