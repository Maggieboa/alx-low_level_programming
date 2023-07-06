#include"main.h"
/**
 *factorial - function to calculate fcatorial
 *
 *@n: placeholder variable for the integer
 *
 *
 *Return: -1 for error, 1 if successful, the factorial if conditions are met.
 *
 **/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
	}
return (n * factorial(n - 1));
}
