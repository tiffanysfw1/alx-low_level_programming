#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 * Return: success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
