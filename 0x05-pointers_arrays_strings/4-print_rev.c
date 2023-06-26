#include"main.h"
/**
*print_rev - starting point of our program
*@s:variable
*
*Return: returns a void
**/
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		for (length = length -1; s[length] != '\0'; length--)
		{
			_putchar(s[length]);
	
		}
	}
	_putchar('\n');
}
