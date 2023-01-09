#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply numbers in form of integers
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: success
 */
int main(int argc, char **argv)
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);

	return (0);
}
