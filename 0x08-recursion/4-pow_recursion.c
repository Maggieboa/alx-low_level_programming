#include"main.h"
/**
 *_pow_recursion - function to calculate
 *x raise to the power of y
 *
 *@x:variable place holder for the interger to
 *be raised to power y
 *
 *@y:variable placeholder
 *
 *Return: return -1 if not successfull or the result
 **/
int _pow_recursion(int x, int y)
{

if (y < 0 && 0 > y)
{
return (-1);
}
if (y != 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
