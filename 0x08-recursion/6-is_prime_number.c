#include "main.h"
/**
  *check - check number
  *@num: number
  *@i: factor
  *
  *Return: 1 if prime, else 0.
  */
int check(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (check(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - confirm if number is prime
  *@n: input
  *
  *Return: 1 if true, else 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check(n, 2));
	}
}
