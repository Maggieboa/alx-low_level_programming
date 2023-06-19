#include<stdio.h>
/**
 *main - starting point og our program
 *
 *
 *
 *Return: returns results after the program is complete
 **/
int main(void)
{
	char alph;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
	putchar(alph);
	}
	putchar('\n');
	return (0);
}
