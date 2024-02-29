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

if (width <= 0 || height <= 0)
{
	return (NULL);
}
arr = malloc(height * sizeof(int *));
if (arr == NULL)
{
	free(arr);
	return (NULL);
}

for (i = 0; i < height; i++)
{
	arr[i] = malloc(width * sizeof(int));
	if (arr[i] == NULL)
	{
		for (j = i; j >= 0; j--)
		free(arr[j]);
		free(arr);
		return (NULL);
	}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		arr[i][j] = 0;
	}
}

return (arr);
}
