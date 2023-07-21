#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
  *print_all - print in any format
  *@format: array of formats (list of parameters)
  *Return: Nill
  */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list arg;
	char *str, *separator;

	va_start(arg, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(arg);
}
