#include"main.h"
/**
*print_square - beginning of our program
*
*@size: local variable
*
*
*Return: empty
**/
void print_square(int size)
{
	int x;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
