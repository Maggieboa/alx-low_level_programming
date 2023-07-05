#include"main.h"
/**
 *_puts_recursion-starting point of our
 *program to pring out a string of characters
 *
 *@s:placeholder variable for our characters
 *
 *
 *Return: empty since its void
 *
 *
 *
 **/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
