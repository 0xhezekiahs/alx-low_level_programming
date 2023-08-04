#include "main.h"

/**
 * _puts_recursion - recursive string print
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* test base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
