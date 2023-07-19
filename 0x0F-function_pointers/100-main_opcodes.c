#include <stdio.h>
#include <stdlib.h>
/**
  *main - opcode of a given machine
  *@argc: arg array index
  *@argv: array of arguments input
  *
  *Return: 0 always
  */
int main(int argc, char *argv[])
{
	int bytes, index;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		printf("%02hhx", *((char *)main + index));
		if (index < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
