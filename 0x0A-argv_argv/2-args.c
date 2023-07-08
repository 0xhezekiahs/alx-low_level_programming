#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry
 *shows how many arguments are recieved
 *@arc: amount recieved
 *
 *@argv: arguments
 *
 *Return: always 0
 */
int main(int arc, char *argv[])
{
	int n;

	for (n = 0; n < arc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
