#include "main.h"
/**
  *factorial - factorial of an input
  *@n: input
  *
  *Return: factorial 0r -1 if input < 0.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
