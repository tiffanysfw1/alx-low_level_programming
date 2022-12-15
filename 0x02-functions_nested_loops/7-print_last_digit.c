#include "main.h"

/**
 * print_last_digit - last digit of the number
 * @nld: last digit of the number
 * Return: digit
 */
int print_last_digit(int)
{
	int nld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld)
	}
	_putchar(pld + '0');
	return (pld);
}
