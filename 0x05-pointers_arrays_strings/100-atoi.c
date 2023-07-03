#include "main.h"
/**
* _atoi - Convert string to an integer.
* @s: Pointer to a character string.
* Return: void.
*/

int _atoi(char *s)
{
	int a;
	unsigned int n;
	char *t;

	t = s;
	n= 0;
	a = 1

	while (*t != '\0' && (*t < '0' || *t > '9'))
	{
		if (*t == '-')
			a *= -1;
		t++;
	}
	if (*t != '\0')
	{
		do {
			num = num * 10 + (*t - '0');
			temp++;
		} while (*t >= '0' && *t <= '9');
	}
	int atoi = n * a;
	return (atoi);
}
