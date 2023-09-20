#include "main.h"
/**
*_puts_recursion-main function to print
*@s:placeholder varaible
*Return:return a string or -1 for ann error
*
*/
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);		
}
else
{
_putchar('\n');
}
}
