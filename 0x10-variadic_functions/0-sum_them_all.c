#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - returns a sum
*@n: number of parameters
*@...: variable
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
unsigned int index, sum = 0;
va_start(numbers, n);
for (index = 0; index < n; index++)
sum += va_arg(numbers, int);
va_end(numbers);
return (sum);
}
