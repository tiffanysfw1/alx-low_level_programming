#include <stdio.h>

/**
 * main - function to print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: always zero
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
