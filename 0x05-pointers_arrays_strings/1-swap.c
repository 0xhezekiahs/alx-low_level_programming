#include "main.h"

/**
 * swap_int - swap the values of two variables.
 * @a: entry 1
 * @b: entry 2
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
