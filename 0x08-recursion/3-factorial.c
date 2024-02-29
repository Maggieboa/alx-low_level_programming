#include "main.h"
/**
 *factorial-function to calaculate the factorial for a number
 *@n:placeholder varaible for a number
 *Return:the factorial result, -1 for error, 1 if a number is 0
 *
 **/
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
if (n == 0)
{
	return (1);
}

return (n * factorial(n - 1));
}
