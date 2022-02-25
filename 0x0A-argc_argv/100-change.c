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
int mon, cent, i, total = 0;
int array[5] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
cent = atoi(argv[1]);
	if (cent < 1)
	{
		printf("0\n");
		return (0);
	}
i = 0;
while (cent > 0 && i < 4)
{
	mon = cent / (array[i]);
	cent = cent % (array[i]);
	total += mon;
	i++;
}
if (cent == 1)
	total++;
printf("%d\n", total);
return (0);
}
