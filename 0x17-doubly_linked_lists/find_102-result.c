#include "lists.h"
#include <stdio.h>
void main (void) 
{
	unsigned long i = 998001; /* 999 * 999 */
	unsigned long res1 = 0, res2 = 1, n = 0;

	for (; res1 != res2 && i > 100000 ; i--)
	{
		res1 = i / 1000;
		n = i;
		res2 = (n % 10) * 100;
		n = i / 10;
		res2 += (n % 10) * 10;
		n = n / 10;
		res2 += (n % 10);

		if (res1 == res2)
		{
			printf("%lu\n", i);
			return;
		}
	}
	printf("No se encontro\n");
}
