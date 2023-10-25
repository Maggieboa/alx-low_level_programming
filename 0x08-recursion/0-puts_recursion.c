#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion-function to print string
 *@s:placeholder for charcaters
 *Return: empty
 *
 **/
void _puts_recursion(char *s)
{
	if (*s)
	{
	_printf(*s);
	_puts_recursion(s + 1);
	}
	else
	{
	_printf('\n');
	}
}
