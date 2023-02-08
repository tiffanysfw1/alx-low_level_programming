#include "main.h"
/**
*read_textfile - function that print letters using POXIS
*@filename: the name of the file
*@letters: contents inside the file
*Return: always zero
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *let;
int t, j;
long int jk;
char *in;
in = malloc(sizeof(char) * (letters + 1));
if (filename == NULL)
return (0);
if (in == NULL)
return (0);
t = open(filename, 0_RDONLY);
if (t == -1)
return (0);
jk = read(t, in, letters);
close (t);
if (jk == -1)
return (0);
in[letters] = '\0';
w = write(STDOUT_FILENO, in, jk);
free(in);
if (j == -1)
return (0);
return (jk);
}
