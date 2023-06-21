#include "main.h"

/**
 * print_sign - Display the sign of a number
 * @n: Number
 *
 * Return: if Number is greater than 0, display 1.
 * if it  is eqaul to 0, display 0.
 * otherwise,display -1.
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = -1;
	}
	return (sign);
}
