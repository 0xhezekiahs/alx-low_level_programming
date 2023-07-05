#include "main.h"
/**
  *_strlen_recursion - string lenght with resursion
  *@s: string
  *
  *Return: string lenght
  */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
