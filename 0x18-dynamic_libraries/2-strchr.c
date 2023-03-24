#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates character to string
 * @s: character
 * @c: character
 * Return: always 0
 */
char *_strchr(char *s, char c)
{

while (*s)
{
if (c == *s)
return (s);
s++;
}
if (c == *s)
return (s);
return (NULL);
}
