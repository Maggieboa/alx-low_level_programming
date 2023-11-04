#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid-function to print an array
 *@width:plaaceholder for width of an array
 *@height:placeholder for height of an array
 *Return: 0 if successful or null
 **/
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;

if (width == 0 || height == 0)
{
	return (NULL);
}
if (width < 0 || height < 0)
{
	return (NULL);
}
arr = malloc(sizeof(int *) * width);
if (arr == NULL)
{
	return (NULL);
}

for (i = 0; i < width; i++)
{
	arr[i] = malloc(sizeof(int *) * height);
	if (arr[i] == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		arr[i][j] = 0;
	}
}
return (arr);
}
