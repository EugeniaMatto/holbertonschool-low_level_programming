#include "dog.h"
/**
 * print_dog - sada
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL || d->name == NULL || d->owner == NULL || d->age < 1)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	if (d->age > 1.0)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
}
