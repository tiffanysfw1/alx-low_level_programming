#include "main.h"

/**
 * _strspn - function that copy the length
 * @s: string
 * @accept: input character
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
int count = 0, flag;
char *start = accept;

while (*s)
{
flag = 0;
while (*accept)
{
if (*accept == *s)
{
count++;
flag = 1;
break;
}
accept++;
}
s++;
accept = start;
if (flag == 0)
break;
}
return (count);
}
