#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n elements of arrays of integers
 * @a: input array
 * @n: input integer
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
