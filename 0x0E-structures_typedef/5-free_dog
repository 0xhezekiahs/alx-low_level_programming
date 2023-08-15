#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - free mem alloc to dog struct
  *@d: structure
  *Return: nothing, just void
  */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
