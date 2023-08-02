#include "main.h"
#include<stdlib.h>
/**
 *array_range-function to create new array containing both
 *min & main integers
 *@min:placeholder variable for int
 *@max:placeholder variable for int
 *Return: pointer
 **/
int *array_range(int min, int max)
{
int length;
int *index;
int array;

if (min > max)
{
	return (NULL);
}

length = max - min + 1;
index = malloc(sizeof(int) * length);

if (index == NULL)
{
	return (NULL);
}
for (array = 0; array < length; array++)
{
	index[array] = min++;
}
return (index);
}
