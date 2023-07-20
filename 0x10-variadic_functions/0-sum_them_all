#include <stdarg.h>
/**
  *sum_them_all - sum all the parameters passed into the function
  *@n: arguments (parameters)
  *
  *Return: Sum of arguments or 0 if error occurs
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int i;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(arglist, int);
	}
	va_end(arglist);

	return (result);
}
