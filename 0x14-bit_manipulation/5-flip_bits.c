#include "main.h"
/**
*flip_bits - function that print the number of bits
*@n: number one
*@m:  number two
*Return:always zero
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int new_num = n ^ m;
int index = (sizeof(unsigned long int) * 8) - 1;
int bits_flipped = 0;
while (index >= 0)
{
if ((new_num >> index) & 1)
bits_flipped++;
index--;
}
return (bits_flipped);
}
