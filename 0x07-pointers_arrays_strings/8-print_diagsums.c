#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - daads
 * @a: matriz
 * @size: largo
 *
 */
void print_diagsums(int *a, int size)
{
int x, suma, sum, cont = 0;
x = 0;
while (cont < size)
{

	if (x == 0)
	{
	suma = 0;
	suma = a[0];
	x = 1 + size;
	}
	else
	{
	suma += a[x];
	x += 1 + size;	  
	}
cont++;
}
printf("%d", suma);
sum = 0;
printf(", %d\n", sum);  
}
