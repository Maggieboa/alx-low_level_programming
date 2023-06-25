#include"main.h"
/**
*print_last_digit - start of our program
*
*@n: variable
*
*
*Return: retuns 1 or 0
**/
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');

	return (l);
}
