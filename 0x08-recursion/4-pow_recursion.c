#include "main.h"
/**
 *_pow_recursion-function to calc the value of a number
 *raised to a power of another number
 *@x:place holder valriable for the number to be raised to the power of y
 *@y:placeholder variable for the number x will be raised to
 *Return: -1 for error, 1 if y = 0 and the result
 *
 **/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
return (x * _pow_recursion(x, y - 1));
}
