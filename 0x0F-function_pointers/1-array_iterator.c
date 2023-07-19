#include <stdio.h>
/**
 * array_iterator - excecute a function given as parameter
 * @array: function array
 * @size: array size
 * @action: what to excecute
  *Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size > 0 && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
