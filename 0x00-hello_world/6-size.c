#include <stdio.h>

/**
 * main -Entry  point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	char x;
	long int y;
	long long int k;
	float v;

	printf("Size of char: %zu byte(s)\n", sizeof(x));
	printf("Size of int: %zu byte(s)\n", sizeof(b));
	printf("Size of long int: %zu byte(s)\n", sizeof(y));
	printf("Size of long long int: %zu byte(s)\n", sizeof(k));
	printf("Size of float: %zu byte(s)\n", sizeof(v));
        return (0);
}
