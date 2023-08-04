#include "main.h"
/**
 * primeHelp - check for prime number
 * @nump: check number input
 * @p: factor
 *
 * Return: 1 if true (prime), 0 is false (not prime)
 */
int primeHelp(int nump, int p)
{
	/* base case test */
	if (p < nump)
	{
		if (nump % p == 0)
		{
			return (0);
		}
		else
		{
			return (primeHelp(nump, p + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - confirm prime factors
 * @n: number input to check
 *
 * Return: 1 if true (prime), 0 if false (not prime)
 */
int is_prime_number(int n)
{
	/* base case test */
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primeHelp(n, 2));
	}
}
