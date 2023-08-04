#include "main.h"
/**
 * sqrtHelp - confirm existence of number
 * @numb: number to confirm
 * @SR: square root
 *
 * Return: square root
 */
int sqrtHelp(int numb, int SR)
{
	if ((SR * SR) == numb)
	{
		return (SR);
	}
	else
	{
		if ((SR * SR) > numb)
			return (-1);
		else
			return (sqrtHelp(numb, SR + 1));

	}
}

/**
 * _sqrt_recursion - square root
 * @n: number
 *
 * Return: squareroot of number (n)
 * if error occurs, -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrtHelp(n, 0));
}
