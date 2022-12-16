#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return:0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
