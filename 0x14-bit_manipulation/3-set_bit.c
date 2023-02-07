#include "main.h"
/**
*set_bit - function that print the value
*@n: pointer
*@index: index value
*Return: always zero
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long innt changenum = 1;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
changenum <<= index;
*n = *n | changenum;
return (1);
}
