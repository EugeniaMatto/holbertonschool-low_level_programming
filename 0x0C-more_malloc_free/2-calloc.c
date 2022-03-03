#include "main.h"
/**
 * _calloc - ubica matriz e inicializa en 0
 * @nmemb: height
 * @size: width
 * Return: puntero a posicion 0 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	
	if (p == NULL)
		return (NULL);

	return(p);
}
