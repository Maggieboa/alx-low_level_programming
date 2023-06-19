#include<stdio.h>
/**
 *main- begining of our program
 *
 *
 *
 *Return: end of our for loop
 **/
int main(void)
{
	int i;
	int y;
	int z;
	y=' ';
	z=',';
	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);

		if (i < '9')
		{
			putchar(z);
			putchar(y);
		}
	}
	putchar('\n');
	return (0);
}
