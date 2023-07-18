#include <unistd.h>

/**
 * _putchar - send a character to standard output
 * @c: char
 *
 * Return: return 1 if succeeed, -1 if not
 * set error number accordinly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
