#include "main.h"
/**
 * print_number - sa
 * @n: da
 */
void print_number(int n)
{
unsigned int positive, numbers, count = 0;
if (n == 0)
{
	_putchar('0');
}
else
{
	if (n < 0)
	{
		_putchar('-');
		numbers = -n;
	}
	else
	{
		numbers = n;
	}
	positive = numbers;
	count = 1;
	while (positive > 9)
	{
	positive /= 10;
	count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((numbers / count) % 10) + '0');

	}
}
}
