#include"main.h"
/**
 * _isdigit - to check whether the data returned is either a number o a digit
 *
 *@c: is a local variable for the program
 *
 * Return: returns either 0 or 1
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
