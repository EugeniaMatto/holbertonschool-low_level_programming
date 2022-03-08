#include "dog.h"
/**
 * init_dog - sada
 * @d: dog
 * @name: ame dogito
 * @age: age doggy
 * @owner: owner doooogo
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
