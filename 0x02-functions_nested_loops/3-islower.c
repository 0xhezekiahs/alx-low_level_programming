#include "main.h"

/**
 * _slower - Check lowercase character.
 * @c: Character
 *
 * Return: return 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
