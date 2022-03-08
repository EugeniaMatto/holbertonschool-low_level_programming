#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - libera perrito
 * @d: asda
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);
}
