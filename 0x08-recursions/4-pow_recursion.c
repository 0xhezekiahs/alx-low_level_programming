#include "main.h"
/**
 * _pow_recursion - recursive power function
 * @x: base
 * @y: exponent
 *
 * Return: on success return x ^ y
 * if x is < 0, return -1
 */
int _pow_recursion(int x, int y)
{
	/* base case test */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
