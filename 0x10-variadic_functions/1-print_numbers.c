#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - display int numbers seperated
 * by a comma and folloed by a new line.
 * @separator: seperate numbers by a comma
 * @n:count of integers used as parameters
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
