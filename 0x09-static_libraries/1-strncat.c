#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: string
 * Return: Always  0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *vmp = dest, *bvn = src;
	int srclen = 0, i = 0;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = bvn;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (dest);
}
