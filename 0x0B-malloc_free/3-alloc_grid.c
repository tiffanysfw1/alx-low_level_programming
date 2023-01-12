#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that return pointer to two dimensional arrays
*@width: length of an array
*@height: height of an array
*Return: pointer
*/
int **alloc_grid(int width, int height)
{
int **ar, i, j;
int len = width * height;
if (len <= 0)
return (NULL);
ar = (int **)malloc(sizeof(int *) * height);
if (ar == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ar[i] = (int *)malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
for (i--; i >= 0; i--)
free(ar[i]);
free(ar);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
ar[i][j] = 0;
return (ar);
}
