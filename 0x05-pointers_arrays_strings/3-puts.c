#include "main.h"

/**
 * _puts - function to print string to stdout
 * @str: string
 * Return: Always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
