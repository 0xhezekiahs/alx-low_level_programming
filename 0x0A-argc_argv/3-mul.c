#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry
 *product of two numbers
 *@argc: This is the argument count
 *@argv: This is the argument vector
 *Return: alwasys 0.
 */
int main(int argc, char *argv[])
{
	int n, product;

	product = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (n = 1; n < argc; n++)
	{
		product = product * atoi(argv[n]);
	}
	printf("%d\n", product);
	return (0);
}
