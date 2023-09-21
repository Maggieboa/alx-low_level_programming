#include"main.h"
/**
 *_print_rev_recursion-function that prints in reverse
 *@s:placeholder varaible for a string to be printed
 *Return:void
 *
 **/
void _print_rev_recursion(char *s)
{
if (*s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (length = length - 1; s[length] != '\0'; length--)
	{
		_putchar(s[length]);
	}
}
else
{
	_putchar('\n');
}
}
