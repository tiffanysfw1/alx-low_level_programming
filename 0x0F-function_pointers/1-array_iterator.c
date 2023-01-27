#include <stdlib.h>

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */

unsigned int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (_strlen_recursion(s + 1) + 1);
}
else
{
return (0);
}
}

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of character to concatenate
 *
 * Return: string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int cLoop1, cLoop2, size_1, size_2, limit;
char *s3;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size_1 = _strlen_recursion(s1);
size_2 = _strlen_recursion(s2);
limit = (n < size_2) ? n : size_2;
s3 = malloc(sizeof(char) * (size_1 + limit) + 1);
if (s3 == NULL)
{
return (NULL);
}
for (cLoop1 = 0; cLoop1 < size_1; cLoop1++)
{
s3[cLoop1] = s1[cLoop1];
}
for (cLoop2 = 0; cLoop2 < limit; cLoop1++, cLoop2++)
{
s3[cLoop1] = s2[cLoop2];
}
s3[cLoop1] = '\0';
return (s3);
}
