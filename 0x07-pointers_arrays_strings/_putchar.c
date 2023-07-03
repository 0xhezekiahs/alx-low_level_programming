#include <unistd.h>
/**
 * _putchar - send character to standard output
 * @c: character
 * Return: 1 if succeed, -1 if failed.
 * Set error number accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
