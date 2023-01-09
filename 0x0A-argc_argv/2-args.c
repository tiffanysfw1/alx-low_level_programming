#include <stdio.h>
#include "main.h"
/**
 * main - function that print arguments per line
 * @argc: count arguments
 * @argv: arguments
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
