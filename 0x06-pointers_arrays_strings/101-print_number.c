#include"main.h"
/**
*print_number - function that prints out integers
*
*@n: placeholder variable for integers
*
*
*Return: void
**/
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
