#include "main.h"

/**
* _pow_recursion - function that gives the number raised to the power
@x: number
@y: power
Return: always zero
*/
int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (-1);
result *= _pow_recursion(x, y - 1);
return (result);
}
