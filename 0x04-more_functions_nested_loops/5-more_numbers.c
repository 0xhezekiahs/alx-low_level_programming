#include "main.h"
/*
 * more_numbers - display from 0 to 14
 * Return: none....
 */
void more_numbers(void)
{
	int lines, numbers;

	for (lines = 0; lines < 10; lines++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + '0');
			}
			_putchar((numbers % 10) + '0');
		}
		_putchar(10);
	}
}
