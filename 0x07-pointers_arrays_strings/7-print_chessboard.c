#include "main.h"
/**
 * print_chessboard - utilize 2D arrays to print chessboard
 * @a: 2D array
 */
void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[a][b]);
		}
		_putchar('\n');
	}
}
