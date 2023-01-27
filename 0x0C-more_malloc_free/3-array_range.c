#include <stddef.h>
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: start of the range
* @max: end of the range
* Return: integer range
*/
int *array_range(int min, int max)
{
int *i, cLoop;
if (min > max)
{
return (NULL);
}
i = malloc(sizeof(int) * (max - min + 1));
if (i == NULL)
{
return (NULL);
}
for (cLoop = 0; min < (max + 1); cLoop++, min++)
{
i[cLoop] = min;
}
return (i);
}
