#include "main.h"
/**
*get_bit - function that returns index
*@n: input number
*index: 
*Return: nothing
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
return ((n >> index) & 1 ? 1 : 0);
}
