#include "main.h"
int _putchar(char c);
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to first char binary num
 * Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0, aux = 1;
	int i = 0, x = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (x = i - 1; x >= 0; x--)
	{
		if (b[x] == '1')
			ret += aux;

		aux = aux + aux;
	}

	return (ret);
}
