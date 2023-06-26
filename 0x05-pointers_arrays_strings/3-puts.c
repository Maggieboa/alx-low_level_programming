#include"main.h"
/**
*_puts -starting point of our program
*
*@str: variable
*
*Return: void
**/
void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
		_putchar('\n');
}
