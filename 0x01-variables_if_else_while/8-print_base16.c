#include <stdio.h>

/**
 * main - print numbers of base sixteen in lowecase 
 * Return: always zero
 */
int main(void)
{
	int k;
	int l;

	for (k = '0'; k<= '9'; k++)
		putchar(k);
	for (l = 'a'; l<= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
