#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns pointer
* @str: string
* Return: always zero
*/
char *_strdup(char *str)
{
char *duplicate;
int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
duplicate = (char *)malloc((sizeof(char) * len) +1);
if (duplicate == NULL)
return (NULL);
for (i = 0; i < len; i++)
duplicate[i] = str[i];
duplicate[len] = '\0';
return (duplicate);
}
