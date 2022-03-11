#include "main.h"
/**
 * print_int - print int
 * @n: number
 */
void print_int(int ni)
{
	unsigned int n;	
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	n = (unsigned int) n;

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
		return;
	}
	
	print_int(n / 10);
	_putchar(n % 10 + '0');
}
