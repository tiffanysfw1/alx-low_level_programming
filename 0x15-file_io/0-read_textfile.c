#include "main.h"
/**
*read_textfile - function that print letters using POXIS
*@filename: the name of the file
*@letters: contents inside the file
*Return: always zero
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, w;
	long int n;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);
	close(fd);
	if (n == -1)
		return (0);
	buf[letters] = '\0';

	w = write(STDOUT_FILENO, buf, n);
	free(buf);
	if (w == -1)
		return (0);

	return (n);
}
