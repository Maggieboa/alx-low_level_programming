#include "main.h"
/**
 *_strlen_recursion:function to calc leng of an array
 *@s:placeholder variable for string
 *Return:length of a string or -1 if an error occurs
 *
 **/
int _strlen_recursion(char *s)
{
unsigned int length = 1;

if(*s != '\0')
{
	return (length + _strlen_recursion(s + 1));
}
return (0);		
}

