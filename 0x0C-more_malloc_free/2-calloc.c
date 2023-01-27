#include <stddef.h>
#include <stdlib.h>
/**
* _memset - fills the first n bytes of the memory area pointed to by with the constant byte b
* @s: pointer to memory area
* @b: constant
* @n: number ot bytes to fill
* Return: write n bytes of value b
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int cLoop;
for (cLoop = 0; cLoop < n; cLoop++)
{
s[cLoop] = b;
}
return (s);
}
/**
* _calloc - allocates memory for an array
* @nmemb: character number
* @size: size of one case
* Return: allocate memory an initialize it
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *s;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
s = malloc(size * nmemb);
if (s == NULL)
{
return (NULL);
}
s = _memset(s, 0, nmemb * size);
return (s);
}
