#include "main.h"
int _putchar(char c);
/**
 * print_binary - that prints the binary representation of a number
 * @n: number
 * Return:  void
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);

	if (((n) & (1)) == 1)
		_putchar('1');
	else
		_putchar('0');
}
