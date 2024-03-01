#include "function_pointers.h"
#include <stddef.h>
/**
*array_iterator-function that can print a function with parameters
*@array:placeholder for array
*@size:placeholder for array size
*@action:placeholder for the action
*Return:null
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
	if (size && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
