#include "function_pointers.h"

/**
*array_iterator - function that execute another function
*@array: array
*@size: a size
*@action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array)
array++;
}
}
