#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coints left
 * @argc: Paramater Entry
 * @argv: One number of argumets
 * Return: zero onOne number of argumetsr
 */

int main(int argc, char *argv[])
{
	int  i, gmme = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; i >= 0;)
	{
		if (i >= 25)
			i -= 25;

		else if (i >= 10)
			i -= 10;

		else if (i >= 5)
			i -= 5;

		else if (i >= 2)
			i -= 2;

		else if (i >= 1)
			i -= 1;
		else
			break;
		gmme += 1;
	}
	printf("%d\n", gmme);
	return (0);
}
