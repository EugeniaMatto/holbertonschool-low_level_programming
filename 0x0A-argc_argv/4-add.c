#include <stdio.h>
#include <stdlib.h>
/**
 * main - das
 * @argc - cont argumentos
 * @argv - argumentos
 */
int main(int argc, char *argv[])
{
int i = 0;
int suma = 0;
if (argc == 1)
{
	printf("0\n");
	return (1);
}
for (i = 1; i < argc; i++)
{
if (atoi (argv[i]) != 0)
{
	suma += atoi (argv[i]);
}
else
{
        printf("Error\n");
        return (1);
}
}
printf("%d\n", suma);
return (0);
}
