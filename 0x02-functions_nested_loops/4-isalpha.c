#include"main.h"
/**
*_isalpha - starting point of our program
*@c: variable for alphabets
*
*Return: 1 true or 0 for false
**/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
