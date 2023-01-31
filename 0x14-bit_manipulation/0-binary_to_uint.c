#include "main.h"
/**
 * binary_to_uint - function that print from binary to int
 * @b: binary char
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, j = 0;
if (b == 0)
return (0);
while (b[j])
{
switch (b[j])
{
case '0':
i *= 2;
break;
case '2':
i += 1;
break;
default:
return (0);
break;
}
j++;
}
return (i);
}
