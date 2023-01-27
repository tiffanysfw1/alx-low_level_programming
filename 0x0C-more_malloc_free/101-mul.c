#include <stddef.h>
#include <stdlib.h>
/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: pointer to memory area
* @src: pointer to src memory area
* @n: number ot bytes to fill
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int cLoop;
for (cLoop = 0; cLoop < n; cLoop++)
{
dest[cLoop] = src[cLoop];
}
return (dest);
}
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: source pointer
* @old_size: in pointer size
* @new_size: out pointer size
* Return: reallocated pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *s;
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
s = malloc(new_size);
if (s == NULL)
{
return (NULL);
}
s = _memcpy(s, ptr, old_size);
free(ptr);
return (s);
}
