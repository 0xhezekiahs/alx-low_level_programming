#include "main.h"
/**
 * _print_rev_recursion - recursive function that print reversed string
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* test base case */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
