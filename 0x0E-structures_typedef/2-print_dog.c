#include "dog.h"
/**
 * print_dog - sada
 * @d: dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner:%s\n", d->name, d->age, d->owner);
}
