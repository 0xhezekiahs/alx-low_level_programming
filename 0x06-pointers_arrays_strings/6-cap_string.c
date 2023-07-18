#include "main.h"
/**
 * cap_string - turn all the character to UPPERCASE
 * @str: string input
 *
 * Return: new format of string
 */
char *cap_string(char *str)
{
	int i, a, flag;
	char nill[] = ",;.!?(){}\n\t\" ";

	for (i = 0, flag = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			flag = 1;
		for (a = 0; nill[a] != '\0'; a++)
		{
			if (nill[a] == str[i])
				flag = 1;
		}

		if (flag)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				flag = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				flag = 0;
			else if (str[i] > 47 && str[i] < 58)
				flag = 0;
		}
	}
	return (str);
}
