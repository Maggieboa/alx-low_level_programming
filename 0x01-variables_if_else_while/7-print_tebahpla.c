#include<stdio.h>
#include<string.h>
/**
 *main - program of our reverse alphabet program
 *
 *
 *
 *
 *
 *Return: the value after the loop
 *
 **/
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
		putchar('\n');

	return (0);
}
