#include "main.h"

/**
 * _abs - print absolute value of integer
 * @ab: integer
 * Return: absolutr value of an integer
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
