#include <stdio.h>

/**
 * main - print the count of arguments passed at run
 * @arg_count: argument index
 * @arg_vector: argument array
 * Return: 0
 */
int main(int arg_count, char *arg_vector[])
{
	/* print */
	printf("%s\n", arg_vector[0]);
	(void)arg_count;
	return (0);
}
