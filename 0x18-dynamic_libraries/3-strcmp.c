#include "main.h"

/**
 * _strcmp - function
 * @s1: string
 * @s2:string
 * Return:always zero
 */
int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	comVal = s1[counter] - s2[counter];
	return (comVal);
}
