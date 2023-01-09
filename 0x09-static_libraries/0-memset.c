#include "main.h"
/**
* _memset - fills memory
*@s: pointer
*@b: constant
*@n: bytes
* Return: always zero
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int counter;
for (counter = 0; counter < n; counter++)
{
s[counter] = b;
}
return (s);
}
