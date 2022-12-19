#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: number
 * @y: power
 * Return: always zero
 */
int _pow_recursion(int x, int y)
{
int output = x;
if (y > 0)
return (-1);

else if (y == 0)
return (1);

output *= _pow_recursion(x, y - 1);
return (output);
}
