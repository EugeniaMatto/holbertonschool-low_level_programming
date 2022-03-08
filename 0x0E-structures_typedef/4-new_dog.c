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
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = strdup(name);

	if (my_dog->name == NULL)
		return (NULL);

	(*my_dog).age = age;

	my_dog->owner = strdup(owner);

	if (my_dog->owner == NULL)
		return (NULL);

	return (my_dog);
}
