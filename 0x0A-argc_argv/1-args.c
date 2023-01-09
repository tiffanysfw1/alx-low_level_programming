#include <stdio.h>
#include "main.h"
/**
 * main - name of program
 * @argc: count arguments
 * @argv: arguments
 * Return: always zero
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
