#include "lists.h"
#include <stdio.h>
void main (void) 
{
	unsigned long i = 998001; /* 999 * 999 */
	unsigned long a = 999, b = 999;
	unsigned long res1 = 0, res2 = 1, n = 0;

	for (; a > 99; a--, b--)
	{
		i = a * b;
		res1 = i / 1000;
		n = i;
		res2 = (n % 10) * 100;
		n = i / 10;
		res2 += (n % 10) * 10;
		n = n / 10;
		res2 += (n % 10);

		if (res1 == res2)
		{
			printf("res de multiplicar: %lu * %lu\n", a, b);
			printf("%lu\n", i);
			return;
		}
	}
	printf("No se encontro\n");
}
