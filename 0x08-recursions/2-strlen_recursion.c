#include "main.h"

/**
 * _strlen_recursion - recursive function to print
 * string lenght
 * @s: string
 *
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	/* test base case */
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
