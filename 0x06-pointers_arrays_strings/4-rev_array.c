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
int y;

for (arr_length = 0; a[arr_length] <= n; arr_length++)
{
	y = n - 1;
}
for (arr_length = 0; arr_length <= n / 2; arr_length++)
{
	x = a[arr_length];
	a[arr_length] = a[y];
	a[y] = x;
	y--;
}
}
