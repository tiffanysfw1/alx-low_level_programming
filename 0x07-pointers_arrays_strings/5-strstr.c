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
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;

while (*one == *two && *two != '\0')
{
one++;
two++;
}

if (*two == '\0')
return (haystack);
}
return (haystack);
}
return (NULL);
}
