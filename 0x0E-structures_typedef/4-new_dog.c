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

	while (name[ln] != '\0')
		ln++;

	while (owner[lo] != '\0')
		lo++;

	if (ln == 0 || lo == 0)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(ln + 1);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i <= ln; i++)
		(my_dog->name)[i] = name[i];

	(*my_dog).age = age;

	my_dog->owner = malloc(lo + 1);

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);	
		free(my_dog);
	}

	for (i = 0; i <= lo; i++)
		(my_dog->owner)[i] = owner[i];

	return (my_dog);
}
