#include"main.h"
/**
*reverse_array - function to write an array in reverse
*
*@a: variable
*@n: variable for the placeholder of length
*
*
*Return: void therefore its empty
**/
void reverse_array(int *a, int n)
{
int arr_length;
int x;

x = 0;

for (arr_length = n - 1; arr_length < n / 2; arr_length--)
{
	x = a[n -1 - arr_length];
	a[n - 1 - arr_length] = a[arr_length];
	a[arr_length] = x;
}
}
