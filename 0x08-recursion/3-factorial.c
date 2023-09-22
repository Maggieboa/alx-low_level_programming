#include "main.h"
/**
 *factorial-function to find factorial
 *
 *@n:placeholder variable for a number to find a factorial
 *
 *Return: the factorial number
 **/
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n >= 0 && n <= 1)
{
	return (1);
}
return (n * factorial(n - 1));
}
