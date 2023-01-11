#include "main.h"
#include <stdlib.h>

/**
 * create_array - create arrays of char dynamically
 * @size: size
 * @c: always zero
 * Return: Always zero
 */
char *create_array(unsigned int size, char c)
{
char *arrays;
unsigned int b;
if (size == 0)
return (NULL);
arrays = (char *)malloc(sizeof(char) * size);
if (arrays == NULL)
return (NULL);
for (b = 0; b < size; b++)
arrays[b] = c;
return (arrays);
}
