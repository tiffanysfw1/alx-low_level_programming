#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to search in
 * @needle: string to locate
 * Return: Always zero
 */
char *_strstr(char *haystack, char *needle)
{
char *veth = needle, *vethn = haystack;

while (*haystack)
{
vethn = haystack;
needle = veth;
while (*haystack == *needle)
{
haystack++;
needle++;
}

if (*needle == '\0')
return (haystack);
haystack = vethn + 1;
}
return (NULL);
}
