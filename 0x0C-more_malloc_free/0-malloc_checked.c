#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - function that allocate memory using malloc
* @b: unsigned int
* Return: void
*/
void *malloc_checked(unsigned int b)
{
void *j;
j = malloc(b);
if (j == NULL)
exit(98);
return (j);
}
