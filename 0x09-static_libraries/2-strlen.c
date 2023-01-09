#include "main.h"

/**
 * _strlen - function to print the length of the string
 * @s: character
 * Return: None
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
