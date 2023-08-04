#include "main.h"
/**
  * _len_O_string - confirm strlen
  * @string: string input
  * Return: return trlen (count) of string
**/
int _len_O_string(char *string)
{
	/* base case test */
	if (*string == '\0')
		return (0);
	return (1 + _len_O_string(string + 1));
}

/**
 * palCheck - confirm palindrome string
 * @index: index
 * @lenp: string len
 * @str: string to check
 * Return: 1 if true, else o
**/
int palCheck(int index, int lenp, char *str)
{
	if (lenp > 0)
	{
		if (str[index] == str[lenp])
		{
			return (palCheck(index + 1, lenp - 1, str));
		}
		else if (str[index] != str[lenp])
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
 * is_palindrome - Checks if a string is a palindrome
 * @s: is the string
 * Return: if string is  palindrome, return 1
 * else, return 0
**/
int is_palindrome(char *s)
{
	return (palCheck(0, _len_O_string(s) - 1, s));
}
