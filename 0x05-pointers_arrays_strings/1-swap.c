#include"main.h"
/**
*swap_int - program starting point
*@a:pointer variable
*@b:pointer variable
*Return: void(empty)
**/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
