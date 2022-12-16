#include "main.h"

/**
 * print_line - function to draw straight line
 * followed by new line.
 * @n: integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
