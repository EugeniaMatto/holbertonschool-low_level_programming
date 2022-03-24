#include "main.h"
/**
 * get_bit - Write a function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* cant. chars maximo q tiene el max unsg long en binario son 64 */
	if (index < 64)
	{
		if (((n >> index) & 1) == 0 || ((n >> index) & 1) == 1)
			return ((n >> index) & 1);
	}
	return (-1);
}
