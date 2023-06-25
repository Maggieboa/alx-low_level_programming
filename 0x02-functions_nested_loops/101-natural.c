#include<stdio.h>
/**
*main -  start of our program
*
*
*Return: 0 for success
**/
int main(void)
{
	int i, a = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			a += i;
		}

		i++;
	}

	printf("%d\n", a);
	return (0);
}
