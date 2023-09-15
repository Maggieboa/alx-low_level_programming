#include"function_pointers.h"
#include<stdio.h>
#include<stddef.h>
/**
*int_index-main function
*@size:placeholder variale for array size
*@cmp:function pointer
*@array:placeholder varaible
*Return: 0 if successful and 1 if not successful
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

i = 0;
if (array && size > 0 && cmp)
{
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
