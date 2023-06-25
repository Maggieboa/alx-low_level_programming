#include"main.h"
/**
*print_alphabet_x10 - start of our program
*
*
*
*Return: void
*
**/
void print_alphabet_x10(void)
{
	char i;
	int x;

	x = 0;
while (x <= 9)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	x++;
}
}
