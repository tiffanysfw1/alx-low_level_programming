#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to multiply numbers in form of integers
 * @a: number of arguments
 * @b: pointer to arguments
 * Return: success
 */
int main(int a, char **b)
{
	if (a < 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(*(b + 1)) * atoi(*(b + 2)));
	return (0);
}
