#include "function_pointers.h"
/**
 * int_index - int_index
 * @array: puntero a inicio de array
 * @size: size array
 * @cmp: function
 * Return: int_index returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (array && cmp && size >= 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		}
	}

	return (i);
}
