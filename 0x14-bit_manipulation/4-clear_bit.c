#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n &= ~(1 << index);
	/*
	* con 1 << index agarramos el 1 en binario y lo movemos hasta el index
	*	que queremos. Con ~ dejamos todos los 1 en 0 y los 0 en 1, luego
	*	hacemos un &. Ej. numero 12 - 1100 - queremos clear index 2
	*						numero 1 - 0001,
	*	numero 1 movido con(<< index) 0100,
	*	ahora lo damos vuelta:        1011,
	*	y ahora hacemos un & entre el 12 y el 1 corrido y dado vuelta:
	*		12: 1100
	* 1 modif.: 1011
	*		& : 1000  - quedo pronto borramos el 0 del index 2 :D
	*
	* para setear un bit es lo mismo pero con: *n |= ((unsigned int)1<<bit);
	*/
		return (1);
	}
	return (-1);
}
