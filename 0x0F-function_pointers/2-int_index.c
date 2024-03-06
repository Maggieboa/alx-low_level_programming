#include "function_pointers.h"
/**
*int_index-function tha prints the first index in an array
*@array:placeholder for an array
*@size:placeholder for the array size
*@cmp:function to compare values
*Return:1 if successfull -1 if there's an err
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
	if (size > 0)
	{
		if (array != NULL || cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				while (i < size)
				{
					if (cmp(array[i]) != 0)
					{
						return (i);
					}
					i++;
				}
			}
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
