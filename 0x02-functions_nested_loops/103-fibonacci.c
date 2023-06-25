#include<stdio.h>
/**
*main - starting point of our program
*
*
*Return: 0 for success
**/
int main(void)
{
	int i = 0;
	long j = 1, x = 2, sum = x;

	while (x + j < 4000000)
	{
		x += j;

		if (x % 2 == 0)
			sum += x;

		j = x - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
