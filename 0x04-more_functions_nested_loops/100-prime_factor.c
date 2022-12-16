#include <stdio.h>

/**
 * main - entry point
 * Return: Always (0)
 */
int main(void)
{
	unsigned long int j = 3, k = 612852475143;

	for (; j < 12057; j += 2)
	{
		while (k % j == 0 && k != j)
			k /= j;
	}
	printf("%lu\k", k);
	return (0);
}
