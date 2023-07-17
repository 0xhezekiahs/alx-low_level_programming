#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory used by dog data struct
 * @d: pointer to dog data struct
 * Return: nill
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
