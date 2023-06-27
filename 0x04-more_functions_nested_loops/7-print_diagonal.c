#include "main.h"
/**
 * print_diagonal - display slant lines
 * @n: lengh
 * Return: 0 always...
 */
void print_diagonal(int n)
{
	int slant_lines;
	int spaces;

	if (n > 0)
	{
		for (slant_lines = 0; slant_lines < n; slant_lines++)
		{
			for (spaces = 0; spaces < slant_lines; spaces++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

