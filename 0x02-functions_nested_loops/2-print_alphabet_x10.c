#include "main.h"

/**
 * print_alphabet_x10 - pprint alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
	char k;
	int no;

	for (no = 0; no <= 9; no++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
