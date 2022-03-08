#include <stdio.h>
/**
 * main - asdasd
 */
int main(void)
{
int i, b, c;

for (i = '0'; i <= '9'; i++)
{
	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			if (i < b && b < c)
			{
				putchar(i);
				putchar(b);
				putchar(c);
				if (i != 7)
				{
				putchar(',');
				putchar(' ');	
				}
			}
			}
	}
}
putchar('\n');

	return (0);
}
