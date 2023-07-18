#include "main.h"
/**
 * reverse_array - take an array of integers and reverse
 * it's contents
 * @a: int array input
 * @n: array index
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < (n / 2); i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
