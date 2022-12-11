#include <stdio.h>

/**
 * main - Print the base numbers using putchar
 * Return: always zero
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
