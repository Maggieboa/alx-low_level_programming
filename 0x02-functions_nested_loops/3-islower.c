#include"main.h"
/**
*_islower - starting point of our program
*
*@c: local variable for our alphabets
*
*Return: 1 for true and 0 for false
**/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
