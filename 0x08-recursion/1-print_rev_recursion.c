#include"main.h"
/**
 *_print_rev_recursion - a function to reverse the words
 *
 *@s:placeholder variable for our characters
 *
 *
 *
 *
 *
 *Return: returns void since its empty
 **/
void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}
