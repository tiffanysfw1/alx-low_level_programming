#include <unistd.h>
/**
 * _putchar - function
 * @c:character
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
