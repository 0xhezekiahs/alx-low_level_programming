#include "main.h"
/**
 *rev_string - make a string to reverse.
 *@s: string
 *Return: nonw
 */
void rev_string(char *s)
{
	int a, b, c, cnt
		a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = i - 1;

	while (c < b)
	{
		cnt = s[c];
		s[c] = s[b];
		s[b] = cnt;
		c++;
		b--;
	}
}
