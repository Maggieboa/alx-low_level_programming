#include"main.h"
/**
*puts2 - beginning of program
*
*@str: local variable
*
*Return: empty since its void
**/
void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
	}
	_putchar('\n');
}
