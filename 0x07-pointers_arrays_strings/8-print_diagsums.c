#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Sum up two diagonals of a square matrix integers
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int line1 = 0;
	unsigned int line2 = 0;

	for (i = 0; i < size; i++)
	{
		line1 += a[(size * i) + i];
		line2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", line1, line2);
}
