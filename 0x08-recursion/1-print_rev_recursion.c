nclude "main.h"
/**
  *_print_rev_recursion - reverse a string wit recursion
  *@s: string.
  *
  *Return: none
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
