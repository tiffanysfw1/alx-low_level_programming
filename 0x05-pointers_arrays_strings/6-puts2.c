#include "main.h"

/**
 * puts2 - function that print string starting with the first character
 * @str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
