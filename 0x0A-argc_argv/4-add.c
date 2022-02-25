#include "main.h"
/**
 * main - das
 * @argc: cont argumentos
 * @argv: argumentos
 * Return: sada
 */
int main(int argc, char *argv[])
{
int i, x, z, suma = 0;
if (argc == 1)
{
	printf("0\n");
	return (1);
}
for (i = 1; i < argc; i++)
{
	z = strlen(argv[i]);
	for (x = 0; x < z; x++)
	{
		if (!(argv[i][x] >= '0' && argv[i][x] <= '9'))
		{
			printf("Error\n");
			return (1);
		}
	}
}
for (i = 1; i < argc; i++)
	suma += atoi(argv[i]);
printf("%d\n", suma);
return (0);
}
