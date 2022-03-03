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
unsigned int i, b;
char *p = (char *)ptr;

if (ptr == '\0')
{
ptr = malloc(new_size);
return ('\0');
}

if (new_size == 0 && ptr != '\0')
{
free(ptr);
return ('\0');
}

if (new_size > old_size)
{
i = new_size - old_size;
p[old_size] = (char *)malloc(i);
return (p);
}

if (new_size < old_size)
{
i = old_size - new_size;
for (b = new_size; b < old_size; b--)
p[b] = '\0';
return (p);
}

if (new_size == old_size)
	return (ptr);

return (ptr);
}
