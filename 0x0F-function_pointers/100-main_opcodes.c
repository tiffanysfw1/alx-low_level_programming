#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int cLoop, byteNumber;
char *ptrMain = (char *)main;
if (argc != 2)
{
puts("Error");
exit(1);
}
byteNumber = atoi(argv[1]);
if (byteNumber < 0)
{
puts("Error");
exit(2);
}
for (cLoop = 0; cLoop < byteNumber; cLoop++)
{
printf("%02hhx", *ptrMain);
if (cLoop < byteNumber - 1)
{
printf(" ");
}
ptrMain++;
}
printf("\n");
return (0);
}
