#include "3-calc.h"
/**
 * main - look through arguments
 * @argc: indext of arg array
 * @argv: array of arg input
 *
 * Return: 0 but error no if wrong input
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0, compute = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check amount of operators */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	compute = (get_op_func(argv[2]))(i, j);
	printf("%d\n", compute);
	return (0);
}
