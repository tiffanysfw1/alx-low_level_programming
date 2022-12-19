#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: integer pointer
 * @b: integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
