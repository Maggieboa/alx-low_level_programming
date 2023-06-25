#include"main.h"
/**
*print_sign - start of our program
*@n: variable
*Return:1 for positive number greater than 0,
*0 for number = to 0 and -1 foe number less than 0
**/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
