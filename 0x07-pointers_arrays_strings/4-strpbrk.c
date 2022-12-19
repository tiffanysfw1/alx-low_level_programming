#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches string for any set of bytes
 * @s: string
 * @accept: character to locate string
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
char *start = accept;

while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}

accept = start;
s++;
}
return (NULL);
}
