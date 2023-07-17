#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog data
 * @name: name
 * @age: age
 * @owner: owner
 *
 *Return: if fail, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, Nlen, Olen;

	struct dog *new_dog = NULL;

	Nlen = 0;
	while (name[Nlen] != '\0')
		Nlen++;
	Olen = 0;
	while (owner[Olen] != '\0')
		Olen++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(Nlen + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(Olen + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= Nlen; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= Olen; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
