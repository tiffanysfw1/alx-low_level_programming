#include "main.h"

/**
* _sqrt_recursion - function that ouputs the square root of a number
* @n: number
* Return: squareroot of a number or not
*/
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
