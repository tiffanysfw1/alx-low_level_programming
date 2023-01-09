#include "main.h"

/**
 * _isalpha - print alphabetic character
 * @c: letter to be checked]
 * Return: 1 if the letter is lowercase and uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
