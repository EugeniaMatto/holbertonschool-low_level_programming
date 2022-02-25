#include <stdio.h>
#include <stdlib.h>
/**
 * main - das
 * @argc: cont argumentos
 * @argv: argumentos
 * Return: sada
 */
int main(int argc, char *argv[])
{
int i = atoi(argv[1]);
int b = atoi(argv[2]);

if (argc > 3)
{
	printf("Error\n");
	return (1);
}

if (i != 0 && b != 0)
{
	printf("%d\n", (i * b));
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
