#include "main.h"
/**
 * _realloc - crea un array de ints
 * @ptr: puntero
 * @old_size: viejo size bytes
 * @new_size: nuevo size bytes
 * Return: puntero a posicion 0 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
p = ptr;

if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}

if (new_size == old_size)
{
return(ptr);
}

if (new_size == 0 && ptr != NULL)
{
return (NULL);
}

free(ptr);
p = malloc(new_size);

return (p);
}
