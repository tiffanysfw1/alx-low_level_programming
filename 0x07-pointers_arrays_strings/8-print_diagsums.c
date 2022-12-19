#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to add diagonals of a square matrix
 * @a: input array
 * @size: size of an array
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
int i, max = size * size, add1 = 0, add2 = 0;

for (i = 0; i < max; i += size + 1)
add1 += a[i];

for (i = size - 1; i < max - 1; i += size - 1)
add2 += a[i];

printf("%d, %d\n", add1, add2);
}
