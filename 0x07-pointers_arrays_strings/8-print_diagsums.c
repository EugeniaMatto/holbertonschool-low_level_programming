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
int x, y, suma, sum, cont = 0;
x = 0;
y = 0;
while (cont < size)
{

	if (x == 0)
	{
	suma = 0;
	sum = 0;
	suma = a[0];
	sum = a[size - 1];
	x = 1 + size;
	y = size + size - 2;
	}
	else
	{
	suma += a[x];
	sum += a[y];
	x += 1 + size;
	y += size - 1;	
	}
cont++;
}
printf("%d", suma);
suma = 0;
printf(", %d\n", sum); 
sum = 0;
}
