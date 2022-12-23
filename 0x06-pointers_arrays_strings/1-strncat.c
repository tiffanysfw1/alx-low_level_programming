#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @n: string
 * Return: Always  0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *vmp = dest, *bvn = src;
	int gimp = 0; i = 0;

	while (*src)
	{
		gimp++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > gimp)
	{
		n = gimp;
	}

	src = bvn;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}
