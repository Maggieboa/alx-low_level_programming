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
i = 0;
while (s[i])
{
	_putchar(s[i]);
	i++;
}
_putchar('\n');

}
