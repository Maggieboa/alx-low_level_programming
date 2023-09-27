#include"main.h"
#include<stdlib.h>
/**
 *alloc_grid-function to print a 2d array
 *
 *@width:placeholder variable for the width
 *@height:placeholder variable for the height
 *Return: 0 for sucess or -1 for error
 **/
int **alloc_grid(int width, int height)
{
int **num;
int i, j;

if (height <= 0 || width <= 0)
{
	return (NULL);
}

num = malloc(sizeof(int *) * height);

if (!num)
{
	return (NULL);
}
for (i = 0; i < height; i++)
{
	num[i] = malloc(sizeof(int) * width);
	if (!num[i])
	{
		while (i >= 0)
		{
			free(num[i--]);
		}
		free(num);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		num[i][j] = 0;
	}
}
return (num);
}
