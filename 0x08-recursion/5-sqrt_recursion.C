#include "main.h"
/**
  *verify - verify existence of sqareroot of number
  *@num: number.
  *@pSqr: sqareroot of number.
  *
  *Return: sqrt of number ot -1 for error.
  */
int verify(int num, int pSqr)
{
	if ((pSqr * pSqr) == num)
	{
		return (pSqr);
	}
	else
	{
		if ((pSqr * pSqr) > num)
			return (-1);
		else
			return (verify(num, pSqr + 1));

	}
}

/**
  *_sqrt_recursion - square root of a number.
  *@n: number
  *
  *Return: squareroot of number -1 if error
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (verify(n, 0));
}
