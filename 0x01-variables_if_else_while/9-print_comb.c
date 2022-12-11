#include <stdio.h>

/**
 * main - print single digits
 * Return: always zero
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
		if (z == '9')
			break;
		putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
