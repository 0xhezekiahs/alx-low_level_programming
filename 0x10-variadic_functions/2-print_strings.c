#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - print a string literal and then a new line
 * @separator: seperators between each character
 * @n: strings count
 *
 * Return: nothing...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
