#include <stdio.h>

/**
 * main - aphabets in reverse order
 * Return: always zero
 */
int main(void)
{
	char k;

	for(k = 'z'; k >= 'a'; k--)
	putchar(k);
	putchar('\n');
	return (0);
}	
