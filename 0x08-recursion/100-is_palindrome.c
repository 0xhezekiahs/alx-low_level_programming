#include "main.h"
/**
  * _strlen_check - confirm strlen
  * @s: string
  * Return: strlen
**/
int _strlen_check(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_check(s + 1));
}
/**
 * check - is string palindrome?
 * @i: index
 * @len:  strlen
 * @s: string
 * Return: 1 if true, else 0.
**/
int check(int i, int len, char *s)
{
	if (len > 0)
	{
		if (s[i] == s[len])
		{
			return (check(i + 1, len - 1, s));
		}
		else if (s[i] != s[len])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
  * is_palindrome - Check for palindrome string
  * @s: string
  * Return: 1 if true,  else 0.
**/
int is_palindrome(char *s)
{
	return (check(0, _strlen_check(s) - 1, s));
}
