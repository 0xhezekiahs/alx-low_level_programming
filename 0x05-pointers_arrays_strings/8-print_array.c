#include "main.h"
#include <stdio.h>
/**
 *print_array - print out an aray of numbers.
 *@a: pointer tk array
 *@n: arrays.
 *Return: none...
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
