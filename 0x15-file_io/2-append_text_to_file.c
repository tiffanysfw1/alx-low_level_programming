#include "main.h"
/**
* _strlen - return the size of a string
* @s: string
* Return: size of a string
*/
int _strlen(char *s)
{
int size = 0;
while (s[size] != '\0')
size++;
return (size);
}
/**
* append_text_to_file - appends text at the end of a file.
* @filename: filename
* @text_content: content of the file
* Return: error code value
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, n;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (!text_content)
return (1);
n = write(fd, text_content, _strlen(text_content));
close(fd);
if (n == -1)
return (-1);
return (1);
}
