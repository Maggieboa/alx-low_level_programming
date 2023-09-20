#include "main.h"
/**
*_puts_recursion-main function to print
*@s:placeholder varaible
*Return:return a string or -1 for ann error
*
*/
void _puts_recursion(char *s)
{
int i;
if (!*s)
{
	_putchar('E');
	_putchar('R');
	_putchar('R');
	_putchar('O');
	_putchar('R');
	_putchar('\n');
}
i = 0;
while (s[i])
{
	_putchar(s[i]);
	i++;
}
_putchar('\n');

}
