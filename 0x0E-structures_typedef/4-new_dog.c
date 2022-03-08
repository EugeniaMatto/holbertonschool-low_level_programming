#include "dog.h"
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
	int ln = 0, lo = 0;

	dog_t *my_dog;

	while (name[ln])
		ln++;

	while (owner[lo])
		lo++;

	if (ln == 0 || lo == 0)
		return (NULL);

	my_dog = malloc(6 + ln + lo);

	if (my_dog == NULL)
		return (NULL);

	for (i = 0; i < ln; i++)
		(my_dog->name)[i] = name[i];

	(*my_dog).age = age;

	for (i = 0; i < lo; i++)
		(my_dog->owner)[i] = owner[i];

	return (my_dog);
}
