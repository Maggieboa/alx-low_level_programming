#include"main.h"
#include<stdio.h>
/**
 *print_diagsums - main function
 *@a: placeholder for the array name
 *@size: length of our array
 *Return: empty
 **/
void print_diagsums(int *a, int size)
{
	int length, sum1 = 0, sum2 = 0;

	for (length = 0; length < size; length++)
	{
		sum1 += a[length];
		a += size;
	}

	a -= size;

	for (length = 0; length < size; length++)
	{
		sum2 += a[length];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
