#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - new perrito
 * @name: name
 * @age: age
 * @owner: owner dog
 * Return: doggy nuevo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int ln, lo;

	dog_t *my_dog;

	ln = strlen(name) + 1;
	lo = strlen(owner) + 1;

	my_dog = malloc(sizeof(dog_t) + ln + lo);

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = strdup(name);

	if (my_dog->name == NULL)
		i = 1;

	(*my_dog).age = age;

	my_dog->owner = strdup(owner);

	if (my_dog->owner == NULL)
		i = 1;

if (i == 1)
{
	free(my_dog);
	return (NULL);
}

	return (my_dog);
}
