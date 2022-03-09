#include "function_pointers.h"
/**
 * array_iterator - array iterator aplica function all elementos
 * @array: puntero a inicio de array
 * @size: size array
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
