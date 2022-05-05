#include "lists.h"
#include <stdio.h>
void main (void) 
{
	unsigned long i = 998001; /* 999 * 999 */
	unsigned long a = 999, b = 999, max = 0;
	unsigned long res1 = 0, res2 = 1, n = 0;

	for (; a > 99; a--)
	{
		for (b = 999; b > 99; b--)
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
				if (max < i)
					max = i;
			}
		}
	}
	printf("%lu\n", max);
}
