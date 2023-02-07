#include "main.h"
/**
*clear_bit - function that set value of bit to 0
*@n: integer
*@index: index
*Return: 1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int changenum = 1;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
changenum <<= index;
*n = *n & ~changenum;
return (1);
}
