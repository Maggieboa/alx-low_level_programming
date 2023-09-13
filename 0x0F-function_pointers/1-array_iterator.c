#include <stdio.h>
#include"function_pointers.h"
/**
*array_iterator-function
*@array:placeholder vaariable
*@size:placeholder variable
*@action:function pointer
*Return:void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;

if (array && size > 0 && action)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}
