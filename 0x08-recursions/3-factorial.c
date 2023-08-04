#include "main.h"
/**
 * factorial - factorial factorial
 * @n: number
 *
 * Return: factorial, if n is less than 0,
 * return -1
 */
int factorial(int n)
{
	/* base case test */
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
