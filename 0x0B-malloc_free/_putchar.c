#include <unistd.h>

/**
 * _putchar - character c
 * @c: print
 * Return: always success
 */
int _putchar(char c)
{
	return (write(1, &c, 1)));
}
