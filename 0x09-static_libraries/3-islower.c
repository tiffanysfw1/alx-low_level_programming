#include "main.h"

/**
 *  _islower - checks the lowercase
 *  @c: letter to be checked
 *  Return: 1 if a letter is lowercase otherwise is 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
