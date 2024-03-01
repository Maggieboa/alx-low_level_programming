#include <stdio.h>
#include "function_pointers.h"
/**
*print_name-function to print out name
*@name:placeholder for name
*@f:the function pointer
*Return:void
**/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
