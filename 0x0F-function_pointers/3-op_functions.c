#include "3-calc.h"
/**
 * op_add - sum of 2 numbers
 * @a: int num1
 * @b: int num2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - difference of 2 numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int dif = a - b;

	return (dif);
}

/**
 * op_mul - product of two numbers
 * @a: num 1
 * @b: num 2
 *
 * Return: product.
 */
int op_mul(int a, int b)
{
	int product = a * b;
	return (product);
}

/**
  *op_div - quotents of 2 numbers.
  *@a: numerator
  *@b: denomerator
  *Return: quotient
  */
int op_div(int a, int b)
{
	int quotient = a / b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (quotient);
}

/**
  *op_mod - remainder from quotients
  *@a: num
  *@b: denum
  *
  *Return: remainder
  */
int op_mod(int a, int b)
{
	int remain = a % b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (remain);
}
