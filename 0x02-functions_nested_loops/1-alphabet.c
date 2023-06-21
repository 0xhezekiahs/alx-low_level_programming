#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase.
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
