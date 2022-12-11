#include <stdio.h>

/**
 * main - alphabets apart from q and e
 *
 * return: always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++
	}
	putchar('\n');
	return (0);
}
