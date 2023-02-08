#include "main.h"
/**
*_strlen - function that returns size
*@s: string
*Return: size
*/
int _strlen(char *s)
{
int size = 0;
while (s[size] != '\0')
size++;
return (size);
}
/**
* create_file - creates a file
* @filename: filename
* @text_content: content of the file
* Return: error code value
*/
int create_file(const char *filename, char *text_content)
{
int fd, n;
if (!filename)
return (-1);
if (!text_content)
text_content = "";
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
n = write(fd, text_content, _strlen(text_content));
close(fd);
if (n == -1)
return (-1);
return (1);
}
