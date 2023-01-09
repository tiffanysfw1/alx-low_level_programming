#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @a: number of args
 * @b: pointer to args
 * Return: zero
 */
int main(int a, char **b)
{
	int sum = 0;
	char s[15];
	char *convert, *input;

	while (--a)
	{
		b++, input = *b;
		sprintf(s, "%d", atoi(*b));
		convert = s;
		if (strcmp(input, convert) != 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*b);
	}
	printf("%d\n", sum);
	return (0);
}
