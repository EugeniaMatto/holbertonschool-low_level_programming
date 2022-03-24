#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sum = 1, x, num = *n;

	if (index < 64)
	{
		if (((num >> index) & 1) == 0)
		{
			for (x = 0; x < index; x++)
			{
				sum = sum + sum;
			}
			num = num + sum;
		}

		(*n) = num;
		return (1);
	}

	return (-1);
}
