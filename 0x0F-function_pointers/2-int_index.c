#include "function_pointers.h"
/**
*int_index - function that searches integer
*@array: integers only
*@size: size of array
*@cmp: pointer to the function
*Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
