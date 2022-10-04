#include <unistd>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return:1
 * on error, -1 is return or error value is determine
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


