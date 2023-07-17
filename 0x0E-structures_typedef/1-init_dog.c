#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initializes a list of data for dog on the struct point
  * @d: pointer to the defined struct
  * @name: name.
  * @age: age.
  * @owner: owner
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
