#include"main.h"
/**
*_abs - starting point of our value
*@c: variable
*
*Return: the absolute valuec
**/
int _abs(int c)
{
	if (c < 0)
	{
		int av;

		av = c * -1;

		return (av);
	}

	return (c);
}

