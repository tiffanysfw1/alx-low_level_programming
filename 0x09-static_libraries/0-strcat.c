#include "main.h"

/**
 * _strcat - function that put two strings together
 * @dest: input string
 * @src: input string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *vmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (vmp);
}
